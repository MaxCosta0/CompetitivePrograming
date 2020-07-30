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

int n, k;
int A[MAXN];

bool check(int h){
	int ret = 0;
	for(int i = 0; i < n; i++){
		ret += A[i]/h;
	}

	return ret >= k;
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	int lo = 0;
	int hi = INF;
	int mid;

	while(hi > lo){
		mid = lo + (hi-lo+1)/2;

		if(check(mid)){
			lo = mid;
		}else{
			hi = mid - 1;
		}
	}

	cout << lo << "\n";
	
	return 0;
}	