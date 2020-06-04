#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
//#define MAXN 10005
//#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int t, n, ai;
//int A[1010];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		int even = 0;
		int odd = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> ai;
			if(ai & 1) odd++;
			else even++;
		}

		cout << (abs(even-odd) == n ? "YES\n": "No\n");

	}

	return 0;	
}