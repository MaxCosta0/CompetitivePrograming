#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N;
bool notprime[1010101010];
void crivo(){
	notprime[1] = true;
	for(int i = 2; i <= N; i++){
		if(notprime[i] == true) continue;
		for(int j = 2; i*j <= N; j++){
			notprime[j*i] = true;
		}
	}
	return;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	crivo();
	for(int i = 2; i <= N; i++){
		if(!notprime[i]) cout << i << " ";
	}
	cout << "\n";

	return 0;
}