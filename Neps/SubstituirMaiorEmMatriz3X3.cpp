#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int mat[3][3];
int inf = 10e6;
int g = -inf;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> mat[i][j];
			g = max(g, mat[i][j]);
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(mat[i][j] == g) mat[i][j] = -1;
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}