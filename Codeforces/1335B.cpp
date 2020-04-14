#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b, n;
	string s;
	char c[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
				'm', 'n', 'o', 'p', 'q', 'r','s', 't', 'u', 'v', 'x', 'w',
				'y', 'z'};

	cin >> t;
	while(t--){
		cin >> n >> a >> b;

		for(int i = 1, j = 1; i <= n; i++, j++){
			s += c[j%b];
		}
		cout << s << "\n";
		s = "\0";
	}
		
}

