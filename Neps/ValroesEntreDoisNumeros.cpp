#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int A, B, g, l;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> A >> B;
	g = max(A, B);
	l = min(A, B);

	for(int i = l; i <= g; i++){
		cout << i << " ";
	}

	cout << "\n";

	return 0;
}