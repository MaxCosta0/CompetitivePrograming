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

	vi A(n);

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	vi lis(n, 0);
	lis[0] = A[0];
	int len = 1;

	for(int i = 1; i < n; i++){
		auto b = lis.begin();
		auto e = lis.begin() + len;

		auto it = lower_bound(b, e, A[i]);

		if(it == e)
			lis[len++] = A[i];
		else
			*it = A[i];
	}

	cout << (n == 0 ? 0 : len) << "\n";

	return 0;

}