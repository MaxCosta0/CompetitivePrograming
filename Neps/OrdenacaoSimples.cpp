#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N;
ll ai;
vi a;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> ai;
		a.pb(ai);
	}

	sort(a.begin(), a.end());
	for(int i = 0; i < N; i++){
		cout << a[i] << " ";
	}
	cout << "\n";

}