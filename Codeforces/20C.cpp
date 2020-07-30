#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;

#define MAXN 200010

int n, m;
vpii adj[MAXN];
bool visited[MAXN];
int dist[MAXN];
bool found[MAXN];
int parent[MAXN];
priority_queue< pii, vpii, greater<pii> > q;

void dijkstra(int s){
	ms(dist, INF, sizeof dist);

	dist[s] = 0;
	q.push({0, s});

	while(!q.empty()){
		int node = q.top().s;
		q.pop();

		if(visited[node])
			continue;

		visited[node] = true;

		for(auto neighbor: adj[node]){
			int d = neighbor.f;
			int v = neighbor.s;

			if(dist[node] + d < dist[v]){
				dist[v] = dist[node] + d;
				parent[v] = node;
				q.push({dist[v], v});
			}
		}
	}
}

void findPath(int node){
	if(parent[node] == -1){
		cout << node << " ";
		return;
	}

	findPath(parent[node]);
	cout << node << " ";
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < m; i++){
		int x, y, d;

		cin >> x >> y >> d;

		adj[x].pb({d, y});
		adj[y].pb({d, x});
	}

	ms(parent, -1, sizeof parent);

	dijkstra(1);

	if(parent[n] == -1)
		cout << "-1";

	else
		findPath(n);

	cout << "\n";
	
	return 0;
}
