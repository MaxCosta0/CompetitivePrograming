#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int n, q, m, t[105], l[105], h[105];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> q;
	while(q--){

		cin >> n >> m;

		for(int i = 0; i < n; i++){
			cin >> t[i] >> l[i] >> h[i];
		}

		int previous = 0;
		int mn = m, mx = m;
		bool flag = true;

		for(int i = 0; i < n; i++){
			mx += t[i] - previous;
			mn -= t[i] - previous;

			if(l[i] > mx or h[i] < mn){
				flag = false;
				break;
			}

			mx = min(h[i], mx);
			mn = max(l[i], mn);
			previous = t[i];
		}

		if(flag){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}

	return 0;
}