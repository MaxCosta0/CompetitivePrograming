#include <bits/stdc++.h>
using namespace std;

long long int N;

long long int contBits(long long int n){
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

	while(cin >> N){

		int resp = contBits(N);
		cout << resp << "\n";
	}

	return 0;
}