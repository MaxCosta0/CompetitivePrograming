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

int S, T, B, N, M;
vpii adj[1005];
bool visited[1005];
int holes[10005];
priority_queue<pii, vpii, greater<pii> > pq;

void dijkstra(int s){
	memset(holes, INF, sizeof(holes));

	holes[s] = 0;
	pq.push( pii(holes[s], s));

	while(true){
		int tmp = -1;

		while(!pq.empty()){
			int pillar = pq.top().second;
			pq.pop();

			if(!visited[pillar]){
				tmp = pillar;
				break;
			}
		}

		if(tmp == -1)
			break;

		visited[tmp] = true;

		for(int i = 0; i < adj[tmp].size(); i++){
			int neighbor = adj[tmp][i].second;
			int h = adj[tmp][i].first;

			if(holes[neighbor] > holes[tmp] + h){
				holes[neighbor] = holes[tmp] + h;
			 	pq.push( pii(holes[neighbor], neighbor));
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for(int i = 0; i < M; i++){
		cin >> S >> T >> B;
		adj[S].pb(pii(B, T));
		adj[T].pb(pii(B, S));
	}

	dijkstra(0);

	cout << holes[N+1] << "\n";

	return 0;		
}