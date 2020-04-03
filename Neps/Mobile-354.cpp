#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100005];
int children[100005];
int N, I, J;
bool ans = true;

int dfs(int u){
	int aux = -1;

	for(auto i: adj[u]){
		children[u] += dfs(i);

		if(aux == -1) aux = children[i];
		else if(children[i] != aux) ans = false;
	}

	return children[u]+1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> I >> J;
		adj[J].push_back(I);
	}

	dfs(0);
	cout << (ans == true ? "bem" : "mal") << endl;

	return 0;    
}