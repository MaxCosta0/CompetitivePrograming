#include <bits/stdc++.h>
using namespace std;

//#define INF 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef pair<int, pair<int, int>> piii;

#define MAXN 50010
#define MAXM 100010

int n, m, c, k, ans;
vpii adj[MAXN];
bool visited[MAXN];
int cost[MAXN];
int parent[MAXN];
int quant[MAXN];
priority_queue<pii, vpii, greater<pii>> q;

void initialize(){
	ans = 0;
	for(int i = 0; i <= n; i++){
		visited[i] = false;
		cost[i] = INF;
		adj[i].clear();
		parent[i] = -1;
	}
}

void solve(int v){

	cost[v] = 0;

	q.push({0, v});

	while(!q.empty()){
		int node = q.top().s;
		q.pop();

		if(visited[node])
			continue;

		visited[node] = true;

		for(auto p: adj[node]){
			int co = p.f;
			int v = p.s;

			if(cost[node] + co < cost[v]){
				cost[v] = cost[node] + co;
				q.push({cost[v], v});
			}
		}
	}
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){

		cin >> n >> m >> c >> k;

		if(n == 0 && m == 0 && c == 0 && k == 0)
			break;

		initialize();

		for(int i = 0; i < m; i++){
			int x, y, d;

			cin >> x >> y >> d;

			if(x >= c && y >= c){	//se os dois vertices estao fora da rota, adiciona ambos
				adj[x].pb({d, y});
				adj[y].pb({d, x});
			}

			if(x < c && y >= c){	//se x esta dentro da rota e y nao, adiciona somente a aresta que chega em x
				adj[y].pb({d, x});
			}

			if(x >=c && y < c){		//se y esta dentro da rota e x nao, adiciona somente a aresta que chega em y
				adj[x].pb({d, y});
			}

			if(x < c && y < c && abs(x-y) == 1){	//se ambos estao na rota e sao consecutivos
				adj[x].pb({d, y});
				adj[y].pb({d, x});
			}
		}

		solve(k);

		cout << cost[c-1] << "\n";

	}

	return 0;
}	