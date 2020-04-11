#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int r, g, b, t;
vi color;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> r >> g >> b;
		color.pb(r);
		color.pb(g);
		color.pb(b);
		sort(color.begin(), color.end());

		b = color[2];
		g = color[1];
		r = color[0];

		if(b > r+g+1) cout << "NO\n";
		else cout << "YES\n";
		color.clear();
	}

	return 0;
}
