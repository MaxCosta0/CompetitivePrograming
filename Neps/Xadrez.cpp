#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int L, C, color;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> L >> C;
	if(L%2 == 0)
		cout << (C%2 == 0 ? 1 : 0);
	else
		cout << (C%2 == 0 ? 0 : 1);

	cout << "\n";

	return 0;
}