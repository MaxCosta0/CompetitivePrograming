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

#define MAXN 1000010
#define MAXM 250

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	vi A(n);

	for(int &it: A){
		cin >> it;
	}

	vi dp(n+2, 0);
	int ans = -LINF;

	for(int i = n-2; i >= 0; i--){
		dp[i] = A[i] + A[i+1] + dp[i+2];
		ans = max(ans, dp[i]);
		dp[i] = max(0LL, dp[i]);
	}

	cout << ans << "\n";

	return 0;

}