#include <bits/stdc++.h>
using namespace std;

int adj[1005][1005];
int N, M, cont = 0;
char X;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> M >> N;


	//Leitura da Entrada (indice começa em 1 para que a posição 0 de todas as linhas sejam iguais a 0 (considerando que as posições fora do mapa são agua))
	for(int i = 1; i <= M; i++){
		for(int j = 1; j <= N; j++){
			cin >> X;
			if(X == '#') adj[i][j] = 1;
		}
	}

	//Fazendo a varredura na matriz de adjacencia e incrementando 1 no contador toda vez que a terra faz fronteira com agua 
	for(int i = 0; i <= M; i++){
		for(int j = 0; j <= N; j++){
			if(adj[i][j] == 1){
				if(adj[i][j-1] == 0 or adj[i][j+1] == 0 or adj[i-1][j] == 0 or adj[i+1][j] == 0) cont++;
			}
		}
	}

	cout << cont << "\n";

	return 0;
}