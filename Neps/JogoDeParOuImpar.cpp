#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int P, D1, D2;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> P >> D1 >> D2;

	cout << ((D1+D2)&1 ? P^1 : P) << "\n";

	return 0;
}
