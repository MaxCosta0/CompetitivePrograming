#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N, maior = -1, soma;
int mat[1005][1005];
int linhas[1005];
int colunas[1005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
 	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> mat[i][j];
			linhas[i] += mat[i][j];
			colunas[j] += mat[i][j];
		}
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			soma = linhas[i]+colunas[j]-2*mat[i][j];
			maior = max(maior, soma);
		}
	}

	cout << maior << "\n";

	return 0;
}