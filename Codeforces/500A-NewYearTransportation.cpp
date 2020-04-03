#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;

vi adj[1234567];
int visited[1234567];
bool ans = false;
int N, t, a;

void dfs(int s, int f){
	visited[s] = true;
	for(int i: adj[s]){
		if(i == f){
			ans = true;
			return;
		}
		if(!visited[i]){
			dfs(i, t);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> t;
	for(int i = 1; i < N; i++){
		cin >> a;
		adj[i].pb(a+i);
	}

	dfs(1, t);
	cout << (ans == true ? "YES\n" : "NO\n");

	return 0;
}