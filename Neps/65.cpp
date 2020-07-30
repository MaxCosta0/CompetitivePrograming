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

#define MAXN 110

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n;

bool visited[MAXN];
int cost[MAXN][MAXN];
deque<pii> q;
int mat[MAXN][MAXN];

void solve(pair<int, int> S){
	ms(cost, INF, sizeof cost);

	cost[S.f][S.s] = 0;
	q.push_front(S);
	while(!q.empty()){
		pii node = q.front();
		q.pop_front();

		for(int i = 0; i < 4; i++){
			int x = node.f + dx[i];
			int y = node.s + dy[i];
			int c = mat[x][y];

			if(x >= 0 and x < n and y >= 0 and y < n){

				if(cost[node.f][node.s] + c < cost[x][y]){
					cost[x][y] = cost[node.f][node.s] + c;

					if(c == 1)
						q.push_back({x, y});

					else
						q.push_front({x, y});
				}
			}
		}
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}

	solve({0, 0});

	cout << cost[n-1][n-1] << "\n";
	
	return 0;
}