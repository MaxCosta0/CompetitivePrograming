#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int n, m;
string str[105];
set<string> dict;
vector<string> L, R;
string mid, rev;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> str[i];
		dict.insert(str[i]);
	}

	for(int i = 0; i < n; i++){
		rev = str[i];
		reverse(rev.begin(), rev.end());
		if(rev == str[i]) mid = rev;
		else if(dict.find(rev) != dict.end()){
			L.pb(str[i]);
			R.pb(rev);
			dict.erase(str[i]);
			dict.erase(rev);
		}
	}

	cout << 2 * L.size() * m + mid.size() << "\n";
	for(auto s: L) cout << s;

	cout << mid;
	reverse(R.begin(), R.end());

	for(auto s: R) cout << s;

	cout << "\n";

	return 0;
}
