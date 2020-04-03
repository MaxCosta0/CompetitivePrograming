#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;

vi adj[1005];
bool visited[1005];
int N, M, I, J, times;

void dfs(int s){
	visited[s] = true;
	for(int i: adj[s]){
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
		cin >> I >> J;
		adj[I].pb(J);
		adj[J].pb(I);
	}

	for(int i = 1; i <= N; i++){
		if(!visited[i]){
			dfs(i);
			times++;
		}
	}

	cout << times << "\n";

	return 0;
}