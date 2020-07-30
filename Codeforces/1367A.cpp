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
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

#define MAXN 100010

string str, ans;
int t;

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	while(t--){

		cin >> str;

		if(str.size() == 2){
			ans = str;
		}

		else{
			ans = str[0];
			ans += str[1];
			for(int i = 3; i < str.size(); i+=2){
				ans+= str[i];
			}
		}

		cout << ans << "\n";

	}

	return 0;
}