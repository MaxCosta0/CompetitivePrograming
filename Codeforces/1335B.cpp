#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int t, n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

 	cin >> t;

 	while(t--){
 		cin >> n;
 		vi e(n);
 		for(int i = 0; i < n; i++){
 			cin >> e[i];
 		}

 		sort(e.begin(), e.end());

 		int curr = 1;
 		int ans = 0;

 		for(int i = 0; i < n; i++){
 			if(curr >= e[i]){
 				ans++;
 				curr = 1;
 			}else
 				curr++;
 		}

 		cout << ans << "\n";
 	}

	return 0;
}