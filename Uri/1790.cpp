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

#define MAXN 100

int n, m, x, y, timer, ans;
vi adj[MAXN];
int low[MAXN];
int tin[MAXN];
bool visited[MAXN];
bool bridges[MAXN];

void dfs(int node, int parent = -1){
	visited[node] = true;

	low[node] = tin[node] = timer++;

	for(auto neighbor: adj[node]){
		if(neighbor == parent)
			continue;

		if(visited[neighbor])
			low[node] = min(low[node], tin[neighbor]);

		else{
			dfs(neighbor, node);

			low[node] = min(low[neighbor], low[node]);

			if(low[neighbor] > tin[node]){
				ans++;
			}
		}
	}
}

void initialize(){
	timer = 0;
	ans = 0;

	for(int i = 1; i <= n; i++){
		adj[i].clear();
		low[i] = -1;
		tin[i] = -1;
		visited[i] = false;
		bridges[i] = false;
	}

}

void solve(){
	for(int i = 1; i <= n; i++){
		if(!visited[i])
			dfs(i);
	}

	cout << ans << "\n";
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	while(cin >> n >> m){
		initialize();

		for(int i = 0; i < m; i++){
			cin >> x >> y;

			adj[x].pb(y);
			adj[y].pb(x);
		}

		solve();
	}
	
	return 0;
}