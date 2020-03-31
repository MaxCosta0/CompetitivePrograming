#include <bits/stdc++.h>
using namespace std;

#define NMAX 10

vector<int> adj[NMAX];
int x, y, edges, nodes;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> nodes;
	cin >> edges;

	for(int i = 0; i < edges; i++){
		cin >> x >> y;
		adj[x].push_back(y);
	}

	for(int i = 1; i <= nodes; i++){
		cout << "Adjacency list of node " << i << " : ";
		for(int j = 0; j < adj[i].size(); j++){
			cout << adj[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;

}