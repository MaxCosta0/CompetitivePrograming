#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
//#define MAXN 10005
//#define MAXM 100005
//#define pi 3.14159265359


typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int n, m;
int A[1010], B[1010];
int memo[1010][1010];
vi ans;

int lcs(int a, int b){

	if(a == n or b == m) return 0;
	
	int &dp = memo[a][b];
	if(dp != -1) return dp;

	if(A[a] == B[b]) return dp = 1 + lcs(a+1, b+1);

	return dp = max( lcs(a+1, b), lcs(a, b+1) ); 

}

void recover(int a, int b){
	if(a == n or b == m) return;

	if(A[a] == B[b]){
		ans.pb(A[a]);
		recover(a+1, b+1);
	}

	else if( lcs(a+1, b) >= lcs(a, b+1) )
		recover(a+1, b);

	else
		recover(a, b+1);

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	for(int i = 0; i < m; i++){
		cin >> B[i];
	}

	ms(memo, -1, sizeof memo);

	recover(0, 0);

	for(auto x: ans){
		cout << x << " ";
	}

	cout << "\n";

	return 0;	
}

