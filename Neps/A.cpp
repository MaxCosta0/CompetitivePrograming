#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

vector<long long int> vet;
long long int sol1, sol2, sol3;
long long int N, ai;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(long long int i = 0; i < N; i++){
		cin >> ai;
		vet.pb(ai);
	}
	
	sol1 = vet[N-1]*vet[N-2]*vet[N-3];
	sol2 = vet[0]*vet[1]*vet[N-1];
	sol3 = vet[0]*vet[1]*vet[2];

	long long int ans = max(sol1, max(sol2, sol3));
	cout << ans << "\n";

	return 0;
}

