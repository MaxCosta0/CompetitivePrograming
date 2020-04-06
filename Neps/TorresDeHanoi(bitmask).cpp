#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N, i = 1, ans;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){
		cin >> N;
		if(N == 0) break;
		cout << "Teste " << i << "\n";
		ans = (1 << N) - 1;
		cout << ans << "\n";
		i++;
	}
}

