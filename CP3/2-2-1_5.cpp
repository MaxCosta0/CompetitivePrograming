#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define pi 3.14159265359

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int n, x;
vi vec;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	vec.resize(n);

	for(int i = 0; i < n; i++){
		cin >> vec[i];
	}

	int sum = 1;
	int ans = 0;

	for(int i = 0; i < n-1; i++){

		if(vec[i] < vec[i+1]){
			sum++;
		}else{
			ans = max(sum, ans);
			sum = 1;
		}
	}

	cout << ans << "\n";

	return 0;

}