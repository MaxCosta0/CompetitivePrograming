#include <bits/stdc++.h>
using namespace std;

int adj[1005][1005];
int N, M, Q, A, B;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for(int i = 0; i < M; i++){
		cin >> A >> B;
		adj[A][B] = 1;
		adj[B][A] = 1;
	}

	cin >> Q;

	for(int i = 0; i < Q; i++){
		cin >> A >> B;
		if(adj[A][B]) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;

}