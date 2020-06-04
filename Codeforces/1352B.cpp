#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define pi 3.14159265359

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int t, n, k;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n >> k;

		int odd = (k-1)*1;
		int even = (k-1)*2;

		if( ((n - odd) & 1) and (n-odd) > 0 ){
			cout << "YES\n";
			for(int i = 0; i < k-1; i++){
				cout << 1 << " ";
			}

			cout << n-odd << "\n";
		}

		else if( (!( (n-even) & 1) ) and (n-even) > 0){
			cout << "YES\n";
			for(int i = 0; i < k-1; i++){
				cout << 2 << " ";
			}
			cout << n-even << "\n";
		}

		else{
			cout << "NO\n";
		}


	}
	return 0;

}