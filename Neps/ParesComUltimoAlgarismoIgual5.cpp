
#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int X, Y, Z, cont;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> X >> Y >> Z;

	if(X%2 == 0 or X%5 == 0) cont++;
	if(Y%2 == 0 or Y%5 == 0) cont++;
	if(Z%2 == 0 or Z%5 == 0) cont++;

	cout << cont << "\n";
	return 0;
}

