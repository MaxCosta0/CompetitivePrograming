#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;

int mat[15][15];
int lines[15], col[15];
int  N, diag1, diag2, val;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> mat[i][j];
		}
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			lines[i] += mat[i][j];
			col[j] += mat[i][j];
			if(i == j){
				diag1 += mat[i][j];
			}
			if(i + j == N-1){
				diag2 += mat[i][j];
			}
		}
	}

	if(diag1 == diag2){
		val = diag1;
		for(int i = 0; i < N; i++){
			if(lines[i] != val or col[i] != val){
				val = -1;
			}
		}
	}else{
		val = -1;
	}

	cout << val << "\n";

	return 0;
}