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
typedef pair<int, pair<int, int>> piii;

#define MAXN 1300010
#define MAXK 5010


int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int l, a, p, r;

	cin >> l >> a >> p >> r;

	int Dcaixa = l*l + a*a + p*p;
	int Desfera = 2*r;

	cout << (Dcaixa <= Desfera*Desfera ? "S" : "N") << "\n";

	return 0;
}