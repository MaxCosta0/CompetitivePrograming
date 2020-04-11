
#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int X, Y;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> X >> Y;
	if(X == 0 or Y == 0)
		cout << "eixos";
	else if(X > 0)
		cout << (Y > 0 ? "Q1" : "Q4");
	else if(X < 0)
		cout << (Y > 0 ? "Q2" : "Q3");
	cout << "\n";

	return 0;
}