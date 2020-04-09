#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int t, n;
string s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		int odd = 0;
		int cont = 0;

		for(char c: s) {
			if((c - '0') & 1) odd++;
		}

		if(odd <= 1){
			cout << "-1\n";
			continue;
		}

		for(char c: s){
			if((c-'0')&1){
				cout << c;
				cont ++;
			}
			if(cont == 2) break;
		}
		cout << "\n";

	}

	return 0;
}