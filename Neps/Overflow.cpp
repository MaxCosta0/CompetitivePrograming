#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

char op;
int N, X, Y, res;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	cin >> X >> op >> Y;

	if(op == '*'){
		res = X*Y;
	}else{
		res = X+Y;
	}

	cout << (res <= N ? "OK\n" : "OVERFLOW\n");

	return 0;
}