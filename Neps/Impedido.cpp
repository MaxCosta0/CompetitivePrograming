#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int L, R, D;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> L >> R >> D;
	if(R > 50 and L < R and R > D) cout << "S\n";
	else cout << "N\n";

	return 0;
}