#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define pi 3.14159

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int A, L, P, d;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> d;
	cin >> A >> L >> P;

	if(d <= A and d <= L and d <= P) cout << "S\n";
	else cout << "N\n";
	
	return 0;
}