#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;

vi adj[100005];
bool visited[100005];
int layer[100005];
int N, n, Ngroups;


int dfs(int s){
	visited[s] = true;
	for(int i: adj[s]){
		layer[s] = dfs(i);
	}
	return layer[s] + 1;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> n;
		if(n != -1) adj[i].pb(n);
	}

	for(int i = 1; i <= N; i++){
		if(!visited[i])	Ngroups = max(Ngroups, dfs(i));
	}

	cout << Ngroups	 << "\n";

	return 0;
}