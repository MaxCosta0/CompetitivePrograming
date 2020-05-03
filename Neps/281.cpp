#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
//#define MAXN 10005
//#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int N, P;
int wgt[2010];
int value[2010];
int memo[2010][2010];

int solve(int meat, int cap){
	
	if(cap < 0) return -INF;
	if(meat == N) return 0;
	
	int &dp = memo[meat][cap];
	if(dp != -1) return dp;

	return dp = max( value[meat] + solve(meat+1, cap - wgt[meat]) , solve(meat+1, cap) );

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> P >> N;
	for(int i = 0; i < N; i++){
		cin >> wgt[i] >> value[i];
	}

	memset(memo, -1, sizeof memo);

	cout << solve(0, P) << "\n";

	return 0;	
}

