#include <bits/stdc++.h>
using namespace std;

int n, cont;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	while(n){
		if(n&1) cont++;
		n>>=1;
	}

	cout << cont << "\n";

	return 0;
}