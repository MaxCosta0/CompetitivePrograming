#include <bits/stdc++.h>
using namespace std;

long long int N;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(cin >> N){
		N &= -N;
		cout << N << "\n";
	}

	return 0;
}