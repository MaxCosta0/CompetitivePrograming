#include <bits/stdc++.h>
using namespace std;

#define NMAX 10

int adj[NMAX][NMAX];
int edges, x, y;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> edges;

	for(int i = 0; i < edges; i++){
		cin >> x >> y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}

	for(int i = 0; i < NMAX; i++){
		for(int j = 0; j < NMAX; j++){
			if(adj[i][j]) cout << "There is an edge between " << i << " " << j << "\n";
		}
	}

	return 0;
}