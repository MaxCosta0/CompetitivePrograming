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

#define MAXN 100
#define MAXM 100010

int t;
string str1, str2;
queue<pii> q;
bool visited[MAXN][MAXN];
int dist[MAXN][MAXN];

int dx[8] = {1, -1, 2, 2, 1, -1, -2, -2};
int dy[8] = {2, 2, 1, -1, -2, -2, 1, -1};
char alphabeta[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

void initialize(){
	for(int i = 0; i <= 8; i++){
		for(int j = 0; j <= 8; j++){
			visited[i][j] = false;
			dist[i][j] = 0;
		}
	}
}

void bfs(pii start){
	visited[start.f][start.s] = true;
	dist[start.f][start.s] = 0;
	q.push(start);

	while(!q.empty()){
		pii cell = q.front();
		q.pop();

		int x = cell.f;
		int y = cell.s;

		for(int i = 0; i < 8; i++){		//celulas no qual o cavaleiro consegue pular a partir da atual
			int nxt_x = x+dx[i];
			int nxt_y = y+dy[i];

			if(nxt_x > 0 && nxt_x <= 8 && nxt_y > 0 && nxt_y <= 8){ //se o cavalo ainda esta dentro do grid

				if(!visited[nxt_x][nxt_y]){	// se ainda nao visitei a celula
					visited[nxt_x][nxt_y] = true;
					dist[nxt_x][nxt_y] = dist[x][y] + 1;
					q.push({nxt_x, nxt_y});
				}
			}
		}
	}
}

int equiv(char c){
	for(int i = 0; i < 9; i++){
		if(c == alphabeta[i]){
			return i+1;
		}
	}
}



int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> str1 >> str2;

		initialize();

		int xi = equiv(str1[0]);
		int yi = str1[1] - '0';

		int xf = equiv(str2[0]);
		int yf = str2[1] - '0';

		bfs({xi, yi});

		cout << dist[xf][yf] << "\n";

	}

	return 0;
}	