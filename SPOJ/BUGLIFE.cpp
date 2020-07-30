#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
//#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef pair<int, pair<int, int>> piii;

#define MAXN 101010
#define MAXM 1000010

int n, m, t;
vi adj[MAXN];
int color[MAXN];
bool bipartite;
queue<int> q;

void bfs(int S){
	color[S] = 0;
	q.push(S);

	while(!q.empty()){
		int v = q.front();
		q.pop();

		for(auto u: adj[v]){
			if(color[u] == -1){
				color[u] = color[v] ^ 1;
				q.push(u);
			}else{
				if(color[u] == color[v])
					bipartite = false;
			}
		}
	}
}

void initialize(){
	bipartite = true;
	for(int i = 0; i <= n; i++){
		adj[i].clear();
		color[i] = -1;
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	int scenario = 1;

	while(t--){

		cin >> n >> m;

		initialize();

		for(int i = 0; i < m; i++){
			int x, y;

			cin >> x >> y;

			adj[x].pb(y);
			adj[y].pb(x);
		}

		for(int i = 0; i < n; i++){
			if(color[i] == -1)
				bfs(i);
		}
		
		cout << "Scenario #" << scenario << ":\n";
		cout << (bipartite ? "No suspicious bugs found!\n" : "Suspicious bugs found!\n");
		scenario++;
	}

	return 0;

}