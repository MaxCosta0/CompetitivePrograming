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

int N;

int A[100005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> A[i];
	}

	sort(A, A+N);

	int mid = N/2;

	int ABC = A[(N/2)-1];
	int ARC = A[N/2];
 
	int ans = ARC - ABC;

	cout << ans << "\n";

	return 0;		
}
