#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define MAXN 10005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int t, n;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;
		vector<int> A(n);

		for(int i = 0; i < n; i++){
			cin >> A[i];
		}

		ll ans = 0;
		int g = -INF;

		for(int i = 0; i < n - 1; i++){
			g = max(g, A[i]);

			if( (A[i] >= 0 and A[i+1] < 0) or (A[i] < 0 and A[i+1] >= 0) ){
				ans += g;
				g = -INF;
			}
		}

		g = max(g, A[n-1]);
		ans += g;

		cout << ans << "\n";

	}
	
	return 0;
}