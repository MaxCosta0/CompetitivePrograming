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

#define MAXN 100010

int n, q, x;
int A[MAXN];

int solve(){
	int left = 0;
	int right = n-1;

	while(left < right){
		int mid = left + (right-left)/2;

		if(A[mid] > x)
			right = mid-1;

		else if (A[mid] < x)
			left = mid+1;

		else
			right = mid;
	}

	return left;
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> q;

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	for(int i = 0; i < q; i++){
		cin >> x;

		int ans = solve();

		cout << (A[ans] == x ? ans : -1) << "\n";
	}
	
	return 0;
}	