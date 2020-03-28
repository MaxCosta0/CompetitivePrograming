#include <bits/stdc++.h>
using namespace std;

int n, T;

int contBits(int x){
	int cont = 0;
	while(n){
		n = n & (n-1);
		cont++;
	}
	return cont;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> n;

		int res = contBits(n);
		cout << res << endl;
	}

	return 0;
}