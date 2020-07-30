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

int extendedEuclidean(int a, int b, int &x, int &y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}

	int x1, y1;
	int g = extendedEuclidean(b, a%b, x1, y1);

	x = y1;
	y = x1 - (a/b)*y1;

	return g;
}


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;

	cin >> a >> b;

	int x, y, mdc;

	mdc = extendedEuclidean(a, b, x, y);

	printf("%d * %d + %d * %d = %d\n", a, x, b, y, mdc);

	return 0;
}