#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
//#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef pair<int, pair<int, int>> piii;

#define MAXN 1000010
#define MAXM 250

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	

	int big = 0;
	int ant = -1, atual;
	int ans = 0;

	for(int i = 0; i < n; i++){
		cin >> atual;
		if(atual > ant)
			big++;
		else{
			ans = max(ans, big);
			big = 1;
		}
		ant = atual;
	}

	ans = max(big, ans);
	
	cout << ans << "\n";

	return 0;

}