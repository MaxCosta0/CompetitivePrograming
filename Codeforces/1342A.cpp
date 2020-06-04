#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

ll t, x, y, a, b;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> x >> y;
		cin >> a >> b;
		ll ans = 0;
		ll ans1 = 0;

		ans1 += max(x, y)*a;
		ans1 += min(x, y)*a;

		if(x > y){
			ans += y*b;
			x -= y;
			ans+= x*a;
		}else{
			ans += x*b;
			y -= x;
			ans+= y*a;
		}

		cout << min(ans, ans1) << "\n";

	}

	return 0;
}