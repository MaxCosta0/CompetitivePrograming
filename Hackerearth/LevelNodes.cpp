#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];
int level[100005];
int N, a, b, x, start, cont = 0;

void bfs(int s){

	queue<int> q;
	q.push(s);
	level[s] = 1;
	visited[s] = true;
	if(level[s] == x) cont++;

	while(!q.empty()){

		int p = q.front();
		q.pop();
		for(int i = 0; i < adj[p].size(); i++){
			if(visited[adj[p][i]] == false){
				visited[adj[p][i]] = true;
				q.push(adj[p][i]);
				level[adj[p][i]] = level[p] + 1;
				if(level[adj[p][i]] == x) cont ++;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N-1; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	cin >> x;

	bfs(1);

	cout << cont << "\n";

	return 0;
}