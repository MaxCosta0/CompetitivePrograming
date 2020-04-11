#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int L1, L2, A1, A2;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> L1 >> A1;
	cin >> L2 >> A2;

	if(L1*A1 == L2*A2){
		cout << "Empate\n";
		return 0;
	}

	cout << ((L1*A1 > L2*A2) ? "Primeiro\n" : "Segundo\n");

	return 0;
}