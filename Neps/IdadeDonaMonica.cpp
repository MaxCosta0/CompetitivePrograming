#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int M, A, B, C, older;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> M >> A >> B;

	C = M-(A+B);

	older = max(A, max(B, C));
	cout << older << "\n";

	return 0;
}