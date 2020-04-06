#include <bits/stdc++.h>
using namespace std;

#define MAXN 1005

int fib[MAXN], n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	//the base cases of problem
	fib[0] = 0;
	fib[1] = 1;

	//calculating fibonnacci in bottom-up mode
	for(int i = 2; i <= n; i++){
		fib[i] = fib[i-1]+fib[i-2];
	}

	cout << fib[n] << "\n";

	return 0;
}