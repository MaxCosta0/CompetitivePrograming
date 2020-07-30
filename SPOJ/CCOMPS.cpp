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

int n, m, ans;
vi adj[MAXN];
bool visited[MAXN];


void dfs(int node){
	visited[node] = true;

	for(auto x: adj[node]){
		if(!visited[x])
			dfs(x);
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < m; i++){
		int x, y;

		cin >> x >> y;

		adj[x].pb(y);
		adj[y].pb(x);
	}


	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dfs(i);
			ans++;
		}
	}

	cout << ans << "\n";

	return 0;
}

