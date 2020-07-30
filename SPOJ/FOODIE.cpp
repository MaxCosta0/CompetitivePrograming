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

#define MAXN 110
#define MAXW 1010

int t, n, k, r;
int val[MAXN];
int wt[MAXN];
int dp[MAXN][MAXW];

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	while(t--){
		cin >> n >> k;

		for(int i = 0; i < n; i++){
			cin >> r;
			int sum = 0;
			for(int j = 0; j < r; j++){
				int tmp;
				cin >> tmp;
				sum += tmp;
			}
			val[i] = sum;
			wt[i] = sum;
		}
		
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= k; j++){
				if(i == 0 || j == 0)
					dp[i][j] = 0;

				else if(wt[i-1] <= j)
					dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);

				else
					dp[i][j] = dp[i-1][j];
			}
		}

		cout << dp[n][k] << "\n";
	}

	return 0;
}