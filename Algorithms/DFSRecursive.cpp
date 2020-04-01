#include <bits/stdc++.h>
using namespace std;

#define NMAX 10

vector<int> adj[NMAX];
bool visited[NMAX];
int nodes, edges, x, y, start;

void dfs(int s){
	visited[s] = true;
	cout << s << "\n";
	for(auto i: adj[s]){
		if(visited[i] == false){
			dfs(i);
		}
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> nodes >> edges;
	for(int i = 0; i < edges; i++){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	cin >> start;

	dfs(start);

	return 0;
}