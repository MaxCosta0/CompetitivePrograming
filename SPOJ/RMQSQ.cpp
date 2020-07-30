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

int n, m, timer;
vi adj[MAXN];
bool visited[MAXN];
bool cutpoint[MAXN];
vi low, tin;

void dfs(int node, int parent = -1){
	visited[node] = true;
	tin[node] = low[node] = timer++;

	int children = 0;

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

			if( (low[neighbor] >= tin[node]) && (parent != -1)){
				cutpoint[node] = true;
			}

			++children;
		}
	}

	if(parent == -1 && children > 1)
		cutpoint[node] = true;	
}

void reset(){
	for(int i = 0; i <= n; i++){
		adj[i].clear();
	}
}

void solve(){
	timer = 0;
	int ans = 0;

	tin.assign(n+1, -1);
	low.assign(n+1, -1);

	ms(visited, false, sizeof visited);
	ms(cutpoint, false, sizeof cutpoint);

	for(int i = 1; i <= n; i++){
		if(!visited[i])
			dfs(i);
	}

	for(int i = 1; i <= n; i++){
		if(cutpoint[i])
			ans++;
	}

	cout << ans << "\n";
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;

	while(true){
		cin >> n >> m;

		if(n == 0 and m == 0)
			break;

		for(int i = 0; i < m; i++){
			cin >> x >> y;

			adj[x].pb(y);
			adj[y].pb(x);
		}

		solve();

		reset();
	}	
	
	return 0;
}