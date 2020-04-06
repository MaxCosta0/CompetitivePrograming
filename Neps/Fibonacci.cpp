#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N;

int fib(int x){
	if(x == 1 or x == 0) return 1;
	return fib(x-1) + fib(x-2);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	cout << fib(N) << "\n";
}