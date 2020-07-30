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

int N, M, x, y, timer;
vi adj[MAXN];
vi root;
int tin[MAXN];
bool visited[MAXN];
vector< pair<int, int> > remover;

void dfs(int node, int parent = -1){
	visited[node] = true;

	tin[node] = timer++;

	for(auto neighbor: adj[node]){
		if(neighbor == parent) continue;

		if(!visited[neighbor]){
			dfs(neighbor, node);
		}

		else{
			if(tin[neighbor] < tin[node]){
				remover.pb({neighbor, node});
			}
		}
	}
}

void initialize(){
	timer = 0;

	remover.clear();

	for(int i = 0; i <= N; i++){
		visited[i] = false;
		adj[i].clear();
		tin[i] = -1;
	}
}

void solve(){

	for(int i = 1; i <= N; i++){
		if(!visited[i]){
			root.pb(i);
			dfs(i);
		}
	}

	cout << root.size()-1 << "\n";

	while(root.size() > 1){
		int r1 = root.front();
		int r2 = root.back();
		root.pop_back();

		pii edge = remover.back();
		remover.pop_back();

		cout << edge.s << " " << edge.f << " " << r1 << " " << r2 << "\n";
	}
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	initialize();

	for(int i = 0; i < M; i++){
		cin >> x >> y;

		adj[x].pb(y);
		adj[y].pb(x);
	}

	if(M < N-1){
		cout << -1 << "\n";
	}

	else{
		solve();
	}

	return 0;
}