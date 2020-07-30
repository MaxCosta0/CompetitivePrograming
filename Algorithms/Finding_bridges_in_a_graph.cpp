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

#define MAXN 200010

int n, m;
vi adj[MAXN];
vi tin, low;
vpii bridge;
bool visited[MAXN];
int timer;

void dfs(int node, int parent = -1){
	visited[node] = true;

	tin[node] = low[node] = timer++;

	for(auto neighbor: adj[node]){
		if(neighbor == parent)	
			continue;

		if(visited[neighbor])
			low[node] = min(low[node], tin[neighbor]);

		else{
			dfs(neighbor, node);

			low[node] = min(low[neighbor], low[node]);

			if(low[neighbor] > tin[node]){
				bridge.pb(mp(node, neighbor));
			}
		}
	}
}

void find_bridges(){
	timer = 0;

	tin.assign(n+1, -1);
	low.assign(n+1, -1);

	for(int i = 1; i <= n; i++){
		if(!visited[i])
			dfs(i);
	}

	cout << "Bridges: " << "\n";
	for(auto x: bridge){
		cout << x.f << " " << x.s << "\n";
	}

}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;

	cin >> n >> m;

	for(int i = 0; i < m; i++){
		cin >> x >> y;

		adj[x].pb(y);
		adj[y].pb(x);
	}

	find_bridges();

	return 0;
}