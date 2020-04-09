#include <bits/stdc++.h>
using namespace std;

#define long long ll;
#define push_back pb;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int,int>> vii;

int n, t;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;
		cout << (n*(n-1))/2 << "\n";
	}

	return 0;
}