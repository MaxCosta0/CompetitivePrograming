#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

#define NMAX 100005

int N;
bool notprime[NMAX];

void crivo(){
	notprime[1] = true;
	for(int i = 2; i*i <= N; i++){
		if(notprime[i] == false){
			for(int j = 2; j*i <= N; j++){
				notprime[j*i] = true;
			}
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