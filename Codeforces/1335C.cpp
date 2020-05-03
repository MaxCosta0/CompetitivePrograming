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

int t, n, ai, ans;
int eq[200010];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;

		memset(eq, 0, sizeof eq);
		set<int> dif;

		for(int i = 0; i < n; i++){
			cin >> ai;
			eq[ai]++;
			dif.insert(ai);
		}

		int n_dif = dif.size();
		int n_eq = -INF;
		
		for(int i = 0; i <= n; i++){
			n_eq = max(n_eq, eq[i]);
		}

		if(n_dif == n_eq){
			ans = n_dif - 1;
		}else{
			ans = min(n_dif, n_eq);
		}

		cout << ans << "\n";
	}
	
	return 0;
}