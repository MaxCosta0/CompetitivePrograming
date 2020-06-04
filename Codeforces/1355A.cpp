#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define pi 3.14159265359
//#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

ll t, k, a;

ll prod(ll x){
	ll mi = INF;
	ll ma = -INF;
	while(x){
		ll tmp = x%10;
		mi = min(mi, tmp);
		ma = max(ma, tmp);
		x /= 10;
	}
	return mi*ma;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		int ans;
		cin >> a >> k;
		for(ll i = 1; i < k; i++){
			if(prod(a) == 0) break;
			a += prod(a);
		}
		cout << a << "\n";

	}

	return 0;
}