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

int N, M, tmp, ans;
vi coins;
int memo[1010];

int solve(int x){
	if(x == 0) return 1;
	if(x < 0) return 0;

	if(memo[x] != -1) return memo[x];

	for(auto c: coins){
		if(solve(x - c)) return memo[x-c] = 1;
	}

	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for(int i = 0; i < N; i++){
		cin >> tmp;
		coins.pb(tmp);
	}

	ms(memo, -1, sizeof memo);

	for(int i = 1; i < M; i++){
		if(!solve(i)) ans++;
	}

	cout << ans << "\n";

	return 0;	
}

