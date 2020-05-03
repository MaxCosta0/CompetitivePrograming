#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define MAXN 10005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int N;

bool prime(int x){
	if(x == 1) 
		return false;
	
	for(int i = 2; i*i < x; i++){
		if(x % i == 0){
			return false;
		}
	}

	return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;

	while(true){
		if(prime(N)){
			cout << N << "\n";
			return 0;
		}
		N++;
	}

	return 0;		
}