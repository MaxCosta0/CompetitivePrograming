
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

int N, M, P, Q, U, node;
int dist[MAXN];
bool visited[MAXN];
vpii adj[MAXN];
dij pq;

int prim(int s){
	memset(dist, INF, sizeof(dist));

	dist[s] = 0;
	pq.push( pii(dist[s], s) );

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

		for(int i = 0; i < adj[node].size(); i++){
			int d = adj[node][i].first;
			int neighbor = adj[node][i].second;

			if(dist[neighbor] > d and !visited[neighbor]){
				dist[neighbor] = d;
				pq.push( pii(dist[neighbor], neighbor) );
			}
		}
	}

	int coast = 0;
	for(int i = 0; i < N; i++){
		coast += dist[i];
	}

	return coast;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	while(M--){
		cin >> P >> Q >> U;

		adj[P].pb( pii(U, Q));
		adj[Q].pb( pii(U, P));
	}

	cout << prim(0) << "\n";

	return 0;		
}