#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;

int N, cont;

int f(int x){
	if(x == 1) return 0;

	if(x % 2 == 0) x /= 2;
	else x = 3*x+1;
	return f(x) + 1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	int cont = f(N);
	cout << cont << "\n";
	
	return 0;
}