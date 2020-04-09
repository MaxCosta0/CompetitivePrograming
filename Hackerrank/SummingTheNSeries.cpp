#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int,int>> vii;
typedef long long ll;

ll N, T, ans;
ll M = 1000000007;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	while(T--){
		cin >> N;
		ans = ((N%M)*(N%M))%M;
		cout << ans << "\n";
	}

	return 0;
}