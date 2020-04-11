#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int cino, chutes;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){
		cin >> cino;
		if(cino == 2018) break;
		chutes++;
	}

	cout << chutes << "\n";
	return 0;
}