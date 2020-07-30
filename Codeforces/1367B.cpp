#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

#define MAXN 100010

int t, n, impar, par, x;
int A[MAXN];

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	while(t--){

		par = 0;
		impar = 0;

		cin >> n;

		for(int i = 0; i < n; i++){
			cin >> x;

			if( (x & 1) and !(i&1) ){
				impar++;
			}
			else if( !(x & 1) and (i&1) ){
				par++;
			}
		}

		cout << (impar == par ? par : -1) << "\n";

	}

	return 0;
}