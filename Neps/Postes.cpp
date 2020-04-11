#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N, p, c, s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N; 
	for(int i = 0; i < N; i++){
		cin >> p;
		if(p >= 85) continue;
		p >= 50 ? c++ : s++;
	}

	cout << s << " " << c << "\n";

	return 0;
}

