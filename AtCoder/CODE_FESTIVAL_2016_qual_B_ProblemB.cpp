
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

int N, A, B, C, acpt, th;
string s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> A >> B;

	cin >> s;

	for(auto x: s){
		if(x == 'a' && acpt < A+B){
			acpt++;
			cout << "Yes\n";
		}else if(x == 'b' && acpt < A+B && th < B){
			th++;
			acpt++;
			cout << "Yes\n";
		}
		else
			cout << "No\n";
		}

	return 0;		
}