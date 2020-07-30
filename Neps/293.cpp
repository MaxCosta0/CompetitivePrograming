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

int position[MAXN];

void sieve(){
	position[0] = position[1] = -1;

	int pos = 0;
	for(int i = 2; i <= MAXN; i++){
		if(position[i] == 0){
			position[i] = ++pos;

			for(int j = i*i; j <= MAXN; j+=i){
				position[j] = -1;
			}
		}
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t;

	cin >> t;

	sieve();

	while(t--){
		cin >> n;

		cout << position[n] << "\n";
	}

	return 0;
}