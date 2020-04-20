#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;


#define MAXN 100005

int edges, nodes, weight, start, target, node;
vpii adj[MAXN];
bool visited[MAXN];
int dist[MAXN];
priority_queue<pii, vpii, greater<pii> > pq;

void dijkstra(int s){
	dist[s] = 0;

	pq.push(pii(dist[s], s));

	while(true){
		int tmp = -1;
		int lower = INF;

		while(!pq.empty()){
			node = pq.top().second;
			pq.pop();

			if(!visited[node]){	
				tmp = node;		//tmp arrows to node that is not visited
				break;
			}
		}

		if(tmp == -1)	//there is no node not visited
			break;
			

		visited[tmp] = true;

		for(int i = 0; i < adj[tmp].size(); i++){
			int d = adj[tmp][i].first;
			int adjnode = adj[tmp][i].second;

			if(dist[adjnode] > dist[tmp] + d){
				dist[adjnode] = dist[tmp] + d;
				pq.push(pii(dist[adjnode], adjnode));
			}
		}		
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> edges >> nodes;

	for(int i = 0; i < edges; i++){
		int nx, ny;
		cin >> nx >> ny >> weight;
		adj[nx].push_back(pii(weight, ny));
		adj[ny].push_back(pii(weight, nx));
	}

	memset(dist, INF, sizeof(dist));

	cin >> start >> target;

	dijkstra(start);

	cout << dist[target] << "\n";
	
	return 0;		
}