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

	if(A == B and A == C) cout << "*\n";
	else if(A == B^1 and A == C^1) cout << "A\n";
	else if(B == A^1 and B == C^1) cout << "B\n";
	else if(C == A^1 and C == B^1) cout << "C\n";

	return 0;
}