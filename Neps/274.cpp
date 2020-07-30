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

#define MAXN 1500000

int gcd(int a, int b){
	if(b == 0)
		return a;

	return gcd(b, a%b);
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	
	cin >> n;

	int A[n+1];

	for(auto &v: A)
		cin >> v;
	
	int ans = A[0];

	for(int i = 1; i < n; i++){
		ans = gcd(A[i], ans);

		if(ans == 1)
			break;
	}

	cout << ans << "\n";
	

	return 0;
}