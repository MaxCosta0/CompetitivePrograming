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

int t, a, b;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> a >> b;

		if(a == b){
			cout << 0 << "\n";
		}else if(( ( !(a&1) and !(b&1) ) or ( (a&1 and b&1) ) )){
			cout << (a-b > 0 ? 1 : 2) << "\n";
		}else{
			cout << (a-b > 0 ? 2 : 1) << "\n";
		}
	}
	return 0;	
}