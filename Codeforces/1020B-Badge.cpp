#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;

vi adj[1005];
bool visited[1005];
int N, n, doublehole;

void dfs(int s){
	visited[s] = true;
	for(int u: adj[s]){
		if(!visited[u]){
			dfs(u);
		}else{
			doublehole = u;
			return;
		}
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> n;
		adj[i].pb(n);
	}

	for(int i = 1; i <= N; i++){
		dfs(i);
		cout << doublehole << " ";
		memset(visited, false, sizeof(visited));
	}
	cout << "\n";

	return 0;
}