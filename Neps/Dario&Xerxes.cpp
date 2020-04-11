#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int D, X, N, dario, xerxes;
vi adj[5];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 5; i++){
		adj[i].pb((i+1)%5);
		adj[i].pb((i+2)%5);
	}

	cin >> N;
	while(N--){
		cin >> D >> X;
		if(adj[D][0] == X or adj[D][1] == X){
			dario++;
		}else{
			xerxes++;
		}
	}

	cout << (dario > xerxes ? "dario\n" : "xerxes\n");
	
	return 0;
}