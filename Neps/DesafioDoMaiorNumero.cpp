#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N, g;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){
		cin >> N;
		if(N == 0){
			break;
		}

		g = max(g, N);
	}

	cout << g << "\n";

	return 0;
}