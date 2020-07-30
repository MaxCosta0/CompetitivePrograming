#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

//Recursive Binary Exponentiation
/*int Exponentiation(int x, int n){
	if(n == 0)
		return 1;

	else if(!(n&1))
		return Exponentiation(x*x, n<<1);

	else
		return x*Exponentiation(x*x, (n-1)<<1);
}*/


//Iterative Binary Exponentiation
int Exponentiation(int x, int n){
	int ans = 1;

	while(n>0){
		if(n&1)
			ans = ans * x;

		x = x*x;
		n = n<<1;
	}

	return ans;
}

//Recursive Modular Exponentiation
/*int modularExponentiation(int x, int n, int m){
	if(n == 0)
		return 1;

	else if(!(n&1))
		return modularExponentiation((x*x)%m, n<<1, m);

	else
		return (x*modularExponentiation((x*x)%m, (n-1)<<1, m))%m;
}*/

//Iterative Modular Exponentiation
int modularExponentiation(int x, int n, int m){
	int ans = 1;

	while(n > 0){
		if(n&1)
			ans = (ans * x)%m;

		x = (x*x)%m;
		n = n<<1;
	}

	return ans;
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, n, m;

	cin >> x >> n >> m;

	int ans = Exponentiation(x, n);
	int ans2 = modularExponentiation(x, n, m);

	cout << "Binary Exponentiation: " << ans << "\n";
	cout << "Modular Exponentiation: " << ans2 << "\n";

	return 0;
}