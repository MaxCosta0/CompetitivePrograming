#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int A, B, C;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	 cin >> A >> B >> C;
	 if(A == B) cout << C << "\n";
	 else if(A == C) cout << B << "\n";
	 else if(B == C) cout << A << "\n";

	return 0;
}
