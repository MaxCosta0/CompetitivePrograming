#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int A;
vi vet;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 4; i++){
		cin >> A;
		vet.pb(A);
	}
	sort(vet.begin(), vet.end());

	bool flag = false;

	for(int i = 0; i+2 < 4; i++){
		if(vet[i+2] < vet[i] + vet[i+1])
			flag = true;
	}

	cout << ok ? "S\n" : "N\n";

	return 0;
}