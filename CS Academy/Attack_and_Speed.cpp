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

#define MAXN 100010

int a, s, k, x, y;
int attack, speed;

void answer(int ans){
	cout << ans << "\n";
	exit(0);
}

bool check(int d){
	attack = a + d*x;
	speed = s + (k-d)*y;

	if(attack == speed)
		answer(d); 

	return attack > speed;
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> s >> k >> x >> y;

	int lo = 0;
	int hi = k;
	int mid;

	while(lo < hi){
		mid = lo + (hi - lo)/2;

		if(check(mid)){
			hi = mid-1;
		}

		else{
			lo = mid+1;
		}
	}
	
	check(lo);

	answer(-1);
	
	return 0;
}	