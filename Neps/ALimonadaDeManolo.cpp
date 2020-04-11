#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N, C, total;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> C;
	for(int i = 0; i < N; i++){
		total += C;
		if(C > 1) C--;
	}

	cout << total << "\n";

	return 0;
}