#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N;
int dp[100005];

int fib(int x){
	if(dp[x] != -1) return dp[x];

	if(x == 1) return 1;
	if(x == 0) return 0;

	return dp[x] = fib(x-1) + fib(x-2);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	memset(dp, -1, sizeof(dp));

	cin >> N;

	for(int i = 0; i < N; i++){
		cout << fib(i) << " ";
	}
	cout << "\n";
}