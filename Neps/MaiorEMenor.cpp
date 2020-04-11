#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N, ai;
int inf = 10e6;
int g = -inf;
int l = inf;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> ai;
		g = max(g, ai);
		l = min(l, ai);
	}

	cout << g << "\n";
	cout << l << "\n";

	return 0;
}