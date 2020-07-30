
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

#define MAXN 1000010
#define MAXM 1010

int n, v;
int coin[MAXN];
int dp[MAXN];

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> v;

	for(int i = 0; i < n; i++){
		cin >> coin[i];
	}

	dp[0] = 0;

	for(int i = 1; i <= v; i++){
		dp[i] = INT_MAX;
	}

	for(int i = 0; i < n; i++){
		for(int j = 1; j <= v; j++){
			if(coin[i] <= j){
				int sub = dp[j-coin[i]];

				if(sub != INT_MAX && sub + 1 < dp[j])
					dp[j] = sub + 1;

			}
		}
	}

	cout << (dp[v] != INT_MAX ? dp[v] : -1) << "\n";

	return 0;

}