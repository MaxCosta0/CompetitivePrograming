#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

vi val;
int A, B, C;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> A >> B >> C;
	val.pb(A);
	val.pb(B);
	val.pb(C);

	sort(val.begin(), val.end());
	A = val[2];
	B = val[1];
	C = val[0];

	cout << ((A == B or A == B+C or B == C) ? "S\n" : "N\n");

	return 0;
}