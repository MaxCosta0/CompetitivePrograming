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

#define MAXN 2000010

int w, n;
int val[MAXN];
int wt[MAXN];
int dp[MAXN];

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> w;

	for(int i = 0; i < n; i++){
		cin >> val[i] >> wt[i];
	}

	ms(dp, 0, sizeof dp);

	for(int i = 0; i < n; i++){
		for(int j = w; j >= wt[i]; j--)
			dp[j] = max(dp[j], val[i] + dp[j-wt[i]]);
	}

	cout << dp[w] << "\n";

	return 0;
}	