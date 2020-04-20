#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int X;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> X;

	for(int i = 0; i < 24; i++){
		//cout << (i+9)%24 << " ";
		if((i+9)%24 == X){
			cout << i << "\n";
			break;
		}
	}

	return 0;
}