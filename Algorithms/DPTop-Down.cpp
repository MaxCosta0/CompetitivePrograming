#include <bits/stdc++.h>
using namespace std;

#define MAXN 1005

int n, dp[MAXN];

int fib(int x){

	if(dp[x] != -1) return dp[x];	// fib(x) already calculated, thus just return the value

	//there are two base cases for this problem
	if(x == 0) return 0;	// fib(0) = 0
	if(x == 1) return 1;	//fib(1) = 1

	//if fib(x) is not calculated, then 
	dp[x] = fib(x-1)+fib(x-2);		//calculate fib(x-1) and fib(x-2), then save the values on our variable dp
	return dp[x];		//return fib(x)
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	memset(dp, -1, sizeof(dp));		//set all positions of dp to -1

	cin >> n;

	cout << fib(n) << "\n";

	return 0;
}