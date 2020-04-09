#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;

ll T, A, B;

ll gcd(ll x, ll y){
	ll tmp = x%y;
	if(tmp == 0) return y;
	return gcd(y, tmp);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	while(T--){
		cin >> A >> B;
		ll GCD = gcd(A, B);
		ll LCM = A*B/GCD;
		cout << LCM << " " << GCD << "\n";
	}	
	return 0;
}