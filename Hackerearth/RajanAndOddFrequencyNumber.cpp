#include <bits/stdc++.h>
using namespace std;

int N, t, cont = 0;
long long int ai;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	for(int i = 0; i < 2*t+1; i++){
		cin >> ai;
		N ^= ai;
	}

	cout << N << "\n";	

	return 0;
}