#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int A, B, C;
vi vec;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> A >> B >> C;
	vec.pb(A);
	vec.pb(B);
	vec.pb(C);
	
	sort(vec.begin(), vec.end(), greater<int>());

	A = vec[0]; B = vec[1]; C = vec[2];

	if(A >= B+C) cout << "n\n";
	else if(A*A < B*B+C*C) cout << "a\n";
	else if(A*A == B*B+C*C) cout << "r\n";
	else if(A*A > B*B+C*C) cout << "o\n";

	return 0;
}