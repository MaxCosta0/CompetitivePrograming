#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef pair<int, pair<int, int>> piii;


int expo(int x, int n){
	int ans = 1;
	
	while(n > 0){
		if(n & 1)
			ans = ans*x;

		x = x*x;
		n >>= 1;
	}
	return ans;
}	

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	int e1 = expo(4, n-3);
	int e2 = expo(4, n-4);

	int ans = 24*e1 + (n-3)*36*e2;

	cout << ans << "\n";
		
	return 0;

}