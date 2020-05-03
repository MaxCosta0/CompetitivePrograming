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

int best, N;
vi coins;
bool ready[1005];
int value[1005];

int solve(int x){
	if(x < 0) return INF;
	if(x == 0) return 0;
	if(ready[x]) return value[x];

	best = INF;
	for(auto c: coins){
		best = min(best, solve(x-c)+1);
	}

	ready[x] = true;
	value[x] = best;
	return best;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	int tmp;
	for(int i = 0; i < N; i++){
		cin >> tmp;
		coins.pb(tmp);
	}

	for(int i = 0; i <= 10; i++){
		cout << solve(i) << "\n";
	}
	
	return 0;
}

