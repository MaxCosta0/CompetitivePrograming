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

int N, M, C, tmp, ans;
int B[25], A[25][25];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M >> C;

	for(int i = 0; i < M; i++){
		cin >> B[i];
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> A[i][j];
		}
	}

	for(int i = 0; i < N; i++){
		int sum = 0;
		for(int j = 0; j < M; j++){
			sum += A[i][j]*B[j];
		}

		if(sum + C > 0)
			ans ++;
	}

	cout << ans << "\n";

	return 0;		
}
