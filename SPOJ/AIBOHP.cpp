
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

#define MAXN 5010
#define MAXM 5010

int t, n;
string rev;
string str;
int dp[MAXN][MAXN];

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	while(t--){
		cin >> rev;

		str = rev;
		reverse(rev.begin(), rev.end());

		n = str.size();

		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				if(i == 0 || j == 0)
					dp[i][j] = 0;

				else if(str[i-1] == rev[j-1])
					dp[i][j] = dp[i-1][j-1] + 1;

				else
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}

		cout << n - dp[n][n] << "\n";
	}

	return 0;
}