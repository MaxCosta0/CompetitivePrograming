#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define MAXN 10005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int t, N, Q, fi, di;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> t;

	while(t--){
		cin >> N >> Q;
		bool flag = true;
		ll cont = 0;
		int curr = 0;

		while(Q--){
			cin >> fi >> di;
			int get = abs(curr - fi);
			int dep = abs(fi - di);
			curr = di;
			cont += get + dep;
		}
		cout << cont << "\n";

	}

	return 0;		
}

