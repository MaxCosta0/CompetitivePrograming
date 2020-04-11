#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define pi 3.14159

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int D;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> D;

	if(D > 1400) cout << 3;
	else if(D >800) cout << 2;
	else cout << 1;
	cout << "\n";

	return 0;
}