#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, ans, n;

	cin >> t;

	while(t--){
		cin >> n;
		ans = n-((n/2)+1);
		cout << ans << "\n";
	}
		
}

