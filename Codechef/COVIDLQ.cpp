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

int t, N, ai, cont, ans;
vi P;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> t;

	while(t--){
		cin >> N;

		for(int i = 0; i < N; i ++){
			cin >> ai;
			P.pb(ai);
		}

		int cont = INF-100;
		bool flag = true;

		for(auto x: P){
			cont++;
			if(x == 1 and cont >= 6){
				cont = 0;
			}else if(x == 1){
				flag = false;
			}
			
		}

		cout << (flag ? "YES\n" : "NO\n");
		P.clear();
	}

	return 0;		
}

