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
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

#define MAXN 100010

int T, n, m, timer;
vi adj[MAXN];
vpii bridge;
int low[MAXN];
int tin[MAXN];
bool visited[MAXN];

void dfs(int node, int parent = -1){
	visited[node] = true;

	low[node] = tin[node] = timer++;

	for(auto neighbor: adj[node]){
		if(neighbor == parent){
			continue;
		}

		if(visited[neighbor]){
			low[node] = min(low[node], tin[neighbor]);
		}

		else{
			dfs(neighbor, node);

			low[node] = min(low[node], low[neighbor]);

			if(low[neighbor] > tin[node]){

				if(neighbor > node)
					bridge.pb(mp(node, neighbor));

				else
					bridge.pb(mp(neighbor, node));

			}
		}
	}
}

void initialize(){	
	timer = 0;

	for(int i = 0; i <= n+1; i++){
		adj[i].clear();
		visited[i] = false;
		tin[i] = -1;
		low[i] = -1;
		bridge.clear();
	}
}

void solve(){	

	for(int i = 1; i <= n; i++){
		if(!visited[i])
			dfs(i);
	}

	if(bridge.size() != 0){

		sort(bridge.begin(), bridge.end());

		cout << bridge.size() << "\n";

		for(auto b: bridge)
			cout << b.f << " " << b.s << "\n";
	}
	else{
		cout << "Sin bloqueos\n";
	}

	initialize();
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;
		
	cin >> T;
	int caso = 1;

	initialize();

	while(T--){
		cin >> n >> m;

		for(int i = 0; i < m; i++){
			cin >> x >> y;

			adj[x].pb(y);
			adj[y].pb(x);
		}

		cout << "Caso #" << caso << "\n";

		solve();

		caso++;

	}
	
	return 0;
}