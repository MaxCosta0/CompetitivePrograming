
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

#define MAXN 110
#define MAXM 1000010

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	int k = 1e9+7;

	cin >> n >> x;

	vi coin(n);
	for(int &v: coin) 
		cin >> v;

	vi ways(x+1, 0);

	ways[0] = 1;

	for(int i = 1; i <= x; i++){
		for(int j = 0; j < n; j++){
			if(i-coin[j] >= 0)
				(ways[i] += ways[i-coin[j]]) %= k;	
		}
	}

	cout << ways[x] << "\n";

	return 0;

}