#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
//#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef pair<int, pair<int, int>> piii;

#define MAXN 1010

int w, n;
int val[MAXN];
int wt[MAXN];
int dp[MAXN][MAXN];

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> w;

	for(int i = 1; i <= n; i++){
		cin >> val[i] >> wt[i];
	}

	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= w; j++){
			if(i == 0 || j == 0)
				dp[i][j] = 0;

			else if(wt[i] <= w)
				dp[i][j] = max(dp[i-1][j], val[i] + dp[i-1][j-wt[i]]);

			else
				dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n][w] << "\n";

	return 0;
}	