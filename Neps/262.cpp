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

int N, M;
int A[1010], B[1010];
int memo[1010][1010];

int lcs(int a, int b){

	if(a == N or b == M) return 0;

	int &state = memo[a][b];
	if(state != -1) return state;

	if(A[a] == B[b]) return state = 1 + lcs(a+1, b+1);

	return state = max( lcs(a+1, b), lcs(a, b+1) );
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for(int i = 0; i < N; i++)
		cin >> A[i];

	for(int i = 0; i < M; i++)
		cin >> B[i];

	ms(memo, -1, sizeof memo);

	int cs = lcs(0, 0);

	cout << N - cs << " " << M - cs << "\n";

	return 0;	
}

