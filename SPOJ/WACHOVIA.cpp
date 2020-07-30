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

int t, k, n, w;
int wt[MAXN];
int val[MAXN];
int memo[MAXN][MAXW];

int solve(int x, int w){
	if(w < 0) return -INF;

	if(x == n) return 0;

	int &dp = memo[x][w];
	if(dp != -1) return dp;

	return dp = max(val[x] + solve(x+1, w-wt[x]), solve(x+1, w));
}

void init(){
	ms(wt, 0, sizeof wt);
	ms(val, 0, sizeof val);
	ms(memo, -1, sizeof memo);
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	while(t--){
		init();

		cin >> k >> n;

		for(int i = 0; i < n; i++){
			cin >> wt[i] >> val[i];
		}

		cout << "Hey stupid robber, you can get " << solve(0, k) << ".\n";
	}

	return 0;
}