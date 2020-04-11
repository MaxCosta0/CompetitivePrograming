#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N1, N2, N3;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N1 >> N2 >> N3;

	N1 = max(N1, max(N2, N3));

	cout << N1 << "\n";	

 	
	return 0;
}


