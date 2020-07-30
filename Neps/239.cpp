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
typedef pair<int, pair<int, int>> piii;

#define MAXN 1300010
#define MAXK 5010

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, q, n;

	cin >> t;

	double maior = 0.0;
	int ans = 0;
	for(int i = 0; i < t; i++){
		cin >> q >> n;

		double bacterias = (n)*log(q);

		if(bacterias > maior){
			maior = bacterias;
			ans = i;
		}
	}

	cout << ans << "\n";

	return 0;
}