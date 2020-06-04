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

string str;
vi nums;
int t;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> str;

		for(int i = 0; i < str.size(); i++){
			char aux = str[i];
			int tmp = (aux - '0') * (pow(10, str.size()-i-1));
			if(tmp != 0)
				nums.pb(tmp);
		}

		cout << nums.size() << "\n";
		for(auto x: nums){			
			cout << x << " ";
		}
		cout << "\n";
		nums.clear();
	}

	return 0;	
}