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

int expo(int a, int b, int m){
	a %= m;
	int ans = 1;

	while(b > 0){
		if(b & 1)
			ans = (ans%m * a%m)%m;

		a = (a%m * a%m)%m;
		b >>= 1;
	}

	return ans;
}

int x, y, g;

void extendedEuclid(int a, int b){
	if(b == 0){
		x = 1;
		y = 0;
		g = a;
	}else{
		
		extendedEuclid(b, a%b);
		int x1 = x, y1 = y;
		x = y1;
		y = x1 - y1*(a/b);
	}
}

int modinverse(int a, int m){
	extendedEuclid(a, m);
	return (x%m + m)%m;
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, m;

	cin >> a >> b >> c >> m;

	int ans = (expo(a, b, m) * modinverse(c, m))%m;

	cout << ans << "\n";
		
	return 0;

}