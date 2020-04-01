#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int visited[100005];
int N, M, a, b, x, cont;

void dfs(int s){
	visited[s] = true;
	cont++;
	for(auto i: adj[s]){
		if(!visited[i]){
			dfs(i);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for(int i = 0; i < M; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	cin >> x;
	dfs(x);

	cout << N-cont << "\n";

	return 0;
}