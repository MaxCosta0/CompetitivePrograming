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

#define MAXN 250
#define MAXM 250

int h, l;
bool visited[MAXN][MAXM];
int color[MAXN][MAXM];
queue<pii> q;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int bfs(pii S){

	int quant = 1;

	visited[S.f][S.s] = true;
	q.push(S);

	while(!q.empty()){
		pii u = q.front();
		q.pop();

		int x = u.s;
		int y = u.f;

		for(int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];

			if(nx >= 0 && nx < l && ny >= 0 && ny < h){

				if(color[y][x] == color[ny][nx] and !visited[ny][nx]){
					visited[ny][nx] = true;
					quant++;
					q.push({ny, nx});
				}
			}
		}	
	}

	return quant;
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> h >> l;

	for(int i = 0; i < h; i++){
		for(int j = 0; j < l; j++){
			cin >> color[i][j];
		}
	}

	int ans = INF;

	for(int i = 0; i < h; i++){
		for(int j = 0; j < l; j++){
			if(!visited[i][j]){
				int tmp = bfs({i, j});
				ans = min(ans, tmp);
			}
		}
	}

	cout << ans << "\n";

	return 0;

}