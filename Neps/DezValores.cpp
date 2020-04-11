
#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int X;
int valores[10];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> X;
	for(int i = 1; i <= 10; i++){
		cout << X+i << " ";
	}
	cout << "\n";

	return 0;
}