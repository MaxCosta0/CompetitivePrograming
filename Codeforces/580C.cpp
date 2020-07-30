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

int n, m, total;
vi A;
vi adj[MAXN];
bool visited[MAXN];

void dfs(int s, int k){
	visited[s] = true;

	if(A[s] == 1)
		k++;
	else
		k = 0;

	if(k > m)
		return;

	if(s != 1 && adj[s].size() == 1)
		total++;
	
	for(auto u: adj[s]){
		if(!visited[u]){
			dfs(u, k);
		}
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;

	cin >> n >> m;
	A.resize(n+1);

	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}

	for(int i = 0; i < n-1; i++){
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}

	dfs(1, 0);

	cout << total << "\n";

	return 0;
}