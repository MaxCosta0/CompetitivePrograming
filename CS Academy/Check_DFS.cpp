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

int N, M, x, y;
vi permutation, order, dfs_result;
vi adj[MAXN];
bool visited[MAXN];

void dfs(int node){
	dfs_result.pb(node);
	visited[node] = true;

	for(auto neighbor: adj[node]){
		if(!visited[neighbor])
			dfs(neighbor);
	}
}

bool ord(int a, int b){
	return order[a] < order[b];
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	permutation.assign(N, 0);
	order.assign(N+1, INF);

	for(int i = 0; i < N; i++){
		int tmp;
		cin >> tmp;
		permutation[i] = tmp;
		order[tmp] = i;
	}

	for(int i = 0; i < M; i++){
		cin >> x >> y;

		adj[x].pb(y);
		adj[y].pb(x);
	}

	for(int i = 1; i <= N; i++){
		sort(adj[i].begin(), adj[i].end(), ord);
	}

	dfs(1);

	cout << (dfs_result == permutation) << "\n";

	return 0;
}