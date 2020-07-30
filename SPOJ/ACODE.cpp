
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

#define MAXN 101010
#define MAXM 1000010

string str;
int memo[MAXN];

int solve(int k){
	int &dp = memo[k];
	if(dp != - 1) return dp;

	int obj = str.size() - k;

	if(k == 0) return 1;

	if(str[obj] == '0') return 0;

	int num = 10 * (str[obj] - '0') + (str[obj+1] - '0');

	if(k >= 2 && num <= 26)
		return dp = solve(k-1) + solve(k-2);

	else
		return dp = solve(k-1);
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){
		cin >> str;

		if(str == "0")
			break;

		ms(memo, -1, sizeof memo);
		cout << solve(str.size()) << "\n";
	}

	return 0;

}

