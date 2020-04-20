
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define MAXN 10005
#define MAXM 100005

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int N, M, node;
bool visited[100005];
int dist[100005];
vpii adj[100005];
dij pq;

void dijkstra(int s){
	memset(dist, INF, sizeof(dist));

	dist[s] = 0;
	pq.push( pii(dist[s], s));

	while(true){
		bool end = true;

		while(!pq.empty()){
			node = pq.top().second;
			pq.pop();

			if(!visited[node]){
				end = false;
				break;
			}
		}

		if(end)
			break;

		visited[node] = true;

		for(auto x: adj[node]){
			int d = x.first;
			int neighbor = x.second;

			if(dist[neighbor] > dist[node] + d){
				dist[neighbor] = dist[node] + d;
				pq.push( pii(dist[neighbor], neighbor));
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	for(int i = 1; i <= 10005; i++){
		adj[i].pb( pii(1, 2*i));
		adj[i].pb( pii(1, i-1));
	}

	dijkstra(N);

	cout << dist[M] << "\n";

	return 0;		
}

