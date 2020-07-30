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

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	vi multiplos;

	for(int i = 1; i*i <= c; i++){
		if(c%i == 0){
			multiplos.pb(c/i);
			multiplos.pb(i);
		}
	}

	sort(multiplos.begin(), multiplos.end());

	int ans = -1;
	for(auto it: multiplos){
		if(it % a == 0 && it % b != 0 && d % it != 0){
			ans = it;
			break;
		}
	}

	cout << ans << "\n";

	return 0;
}