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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A, B, sum = 0;

	cin >> A >> B;

	sum = (B-1+A-2)/(A-1);

	cout << sum << "\n";
	return 0;		
}