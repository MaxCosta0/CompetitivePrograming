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

#define MAXN 5001
#define MAXM 5001

string linha, coluna;
int dp[MAXN][MAXM];


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(cin >> linha >> coluna){

		int n = linha.size();
		int m = coluna.size();

		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= m; j++){
				if(i == 0 || j == 0)
					dp[i][j] = 0;

				else if(linha[i-1] == coluna[j-1])
					dp[i][j] = 1 + dp[i-1][j-1];

				else
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}

		int i = n;
		int j = m;
		string ans;

		while(i > 0 and j > 0){
			if(linha[i-1] == coluna[j-1]){
				ans += linha[i-1];
				i--;
				j--;
			}

			else if(dp[i-1][j] > dp[i][j-1]){
				ans += linha[i-1];
				i--;
			}

			else{
				ans+= coluna[j-1];
				j--;
			}
		}

		if(j == 0 and i != 0){
			for(int k = i-1; k >= 0; k--){
				ans += linha[k];
			}
		}

		else if(i == 0 and j != 0){
			for(int k = j-1; k >= 0; k--){
				ans += coluna[k];
			}
		}

		reverse(ans.begin(), ans.end());
		
		cout << ans << "\n";
	}

	return 0;
}