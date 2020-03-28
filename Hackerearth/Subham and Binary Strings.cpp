#include <bits/stdc++.h>
using namespace std;

int t, n, cont = 0;
string str;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	for(int i = 0; i < t; i++){
		cin >> n;
		cin >> str;
		cont = count(str.begin(), str.end(), '0');
		cout << cont << "\n";
	}


	return 0;
}