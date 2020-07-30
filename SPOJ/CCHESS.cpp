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

#define MAXN 200010

//moves
int dx[8] = {1, -1, 1, -1, -2, -2, 2, 2};
int dy[8] = {2, 2 ,-2, -2, 1, -1, 1, -1};

vpii adj[MAXN];
bool visited[MAXN];
int cost[MAXN];
priority_queue< pii, vpii, greater<pii> > q;

int a, b, c, d;

void reset(){

	for(int i = 0; i < 90; i++){
		visited[i] = false;
		//adj[i].clear();
		cost[i] = INF;
	}
}

void solve(int s){
	cost[s] = 0;
	q.push({0, s});

	while(!q.empty()){
		int node = q.top().s;
		q.pop();

		if(visited[node])
			continue;

		visited[node] = true;

		for(auto p: adj[node]){
			int c = p.f;
			int v = p.s;

			if(cost[node] + c < cost[v]){
				cost[v] = cost[node] + c;
				q.push({cost[v], v});
			}
		}
	}
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//movimentos possiveis do cavalo
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			for(int k = 0; k < 8; k++){
				int x = i+dx[k];
				int y = j+dy[k];
				if(x >= 0 and y >= 0 and x < 8 and y < 8){
					//o cavalo pode alcançar
					int co = i*x + j*y; //custo
					adj[i*10+j].pb({co, x*10+y});
					adj[x*10+y].pb({co, i*10+j});
				}
			}
		}
	}


	while(cin >> a >> b >> c >> d){

		reset();

		solve(a*10+b);

		if(visited[c*10+b]){
			cout << cost[c*10+d];
		}
		else{
			cout << "-1";
		}

		cout << "\n";
	}
	
	return 0;
}