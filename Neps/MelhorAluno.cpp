#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

float Pedro, Paulo;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> Pedro >> Paulo;

	cout << (Pedro <= Paulo ? "Pedro\n" : "Paulo\n");

	return 0;
}

