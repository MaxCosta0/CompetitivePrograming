#include <bits/stdc++.h>
using namespace std;

#define NMAX 10

int nodes, edges, A, B, start;
vector<int> adj[NMAX];
bool visited[NMAX];
int level[NMAX];

void bfs(int s){
	queue<int> q;
	q.push(s);
	level[s] = 0;
	visited[s] = true;

	while(!q.empty()){
		int p = q.front();
		q.pop();
		for(int i = 0; i < adj[p].size(); i++){
			if(visited[ adj[p][i] ] == false){

				level[ adj[p][i] ] = level[p] + 1;
				q.push( adj[p][i] );
				visited[ adj[p][i] ] = true;
			}
		}
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> nodes >> edges;

	for(int i = 0; i < edges; i++){
		cin >> A >> B;
		adj[A].push_back(B);
	}

	cin >> start;
	bfs(start);

	for(int i = 0; i < nodes; i++){
		cout << "Level de " << i << ": " << level[i] << "\n";
	}

	return 0;
}