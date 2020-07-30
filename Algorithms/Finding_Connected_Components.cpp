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
vi component;
bool visited[MAXN];


void dfs(int node){
	visited[node] = true;
	component.pb(node);

	for(auto x: adj[node]){
		if(!visited[x])
			dfs(x);
	}
}

void search(){
	ms(visited, false, sizeof visited);

	for(int i = 1; i <= m; i++){
		if(!visited[i]){
			component.clear();
			dfs(i);

			cout << "Component: ";

			for(auto x: component){
				cout << x << " ";
			}
			cout << "\n";
		}
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		int x, y;

		cin >> x >> y;

		adj[x].pb(y);
		adj[y].pb(x);
	}

	search();

	return 0;
}