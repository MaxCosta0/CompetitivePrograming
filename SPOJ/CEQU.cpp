#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
//#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int n, a, b, c;

int ex(int a, int b, int &x, int &y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}

	int x1, y1;

	int g = ex(b, a%b, x1, y1);

	x = y1;
	y = x1-(a/b)*y1;

	return g;
}

bool diofantina(int a, int b, int c, int &x, int &y){
	int g = ex(a, b, x, y);

	if(c%g != 0)
		return false;


	x *= c/g;
	y *= c/g;

	return true;
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	int caso = 1;
	while(n--){
		int x = 0;
		int y = 0;

		cin >> a >> b >> c;

		bool ans = diofantina(a, b, c, x, y);
		cout << "Case " << caso << ": ";

		cout << (ans ? "Yes\n" : "No\n");

		caso++;
	}	

	return 0;
}