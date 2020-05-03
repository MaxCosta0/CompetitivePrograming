#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define MAXN 10005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int t;
int mat[9][9];

string aux[9];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){

		for(int i = 0; i < 9; i++){
			cin >> aux[i];
		}

		int col = 0;
		for(int i = 0; i < 3; i++){
			int line = 3*i;
			for(int j = col; j < 9; j+=3){
				if(j < 8){
					aux[line][j] = aux[line][j+1];
				}else{
					aux[line][j] = aux[line][j-1];
				}				
				line++;
			}
			col++;
		}

		for(int i = 0; i < 9; i++){
			for(int j = 0; j < 9; j++){
				cout << aux[i][j];
				mat[i][j] = aux[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}