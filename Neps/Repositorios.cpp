#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;


int C, N, Pc, Vc, Pn, Vn;
map<int, int> rep, internet;
set<int> apps;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> C >> N;
	for(int i = 0; i < C; i++){
		cin >> Pc >> Vc;
		rep[Pc] = Vc;
		apps.insert(Pc);
	}

	for(int i = 0; i < N; i++){
		cin >> Pn >> Vn;
		apps.insert(Pn);
		internet[Pn] = max(internet[Pn], Vn);
	}

	for(auto it: apps){
		if(internet[it] > rep[it])
			cout << it <<  " " << internet[it] << "\n";
	}

	return 0;
}

