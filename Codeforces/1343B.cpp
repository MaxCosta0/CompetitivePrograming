
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

int t, n;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;
		int odd = 0;
		int even = 0;
		if((n/2)&1)
			cout << "NO\n";
		else{
			cout << "YES\n";
			for(int i = 2; i <= n; i+=2){
				cout << i << " ";
				even += i;
			}
			for(int i = 1; i < n-1; i+=2){
				cout << i << " ";
				odd += i;
			}
			cout << abs(odd - even) << "\n";
		}
	}
	
	return 0;
}


