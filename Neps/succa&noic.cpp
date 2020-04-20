#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;


#define MAXN 100005

int n, m;
int noic_city;
int succa_city;
int dist[MAXN];
int visited[MAXN];
vpii neighbor[MAXN];

void Dijkstra(int s){
	dist[s] = 0;
	priority_queue<pii, vpii, greater<pii> > pq;

	pq.push( pii(dist[s], s) );

	while(true){
		int tmp = -1;
		int lower = INF;

		while(!pq.empty()){
			int node = pq.top().second;
			pq.pop();

			if(!visited[node]){
				tmp = node;
				break;
			}
		}

		if(tmp == -1){
			break;
		}

		visited[tmp] = true;

		for(int i = 0; i < neighbor[tmp].size(); i++){
			int d = neighbor[tmp][i].first;
			int node = neighbor[tmp][i]	.second;

			if(dist[node] > dist[tmp] + d){
				dist[node] = dist[tmp] + d;
				pq.push( pii(dist[node], node) );
			}
		}

	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	cin >> succa_city >> noic_city;

	for(int i = 1; i <= m; i++){
		int x, y, time;

		cin >> x >> y >> time;

		neighbor[x].pb(pii(time, y));
		neighbor[y].pb(pii(time, x));
	}

	memset(dist, INF, sizeof(dist));

	Dijkstra(succa_city);
	
	cout << dist[noic_city] << "\n";
	
	return 0;		
}



