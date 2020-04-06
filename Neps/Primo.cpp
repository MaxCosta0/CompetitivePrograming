#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

bool eh_primo(int x){
	if(x == 2) return true;
	else if( x == 1) return false;
	for(int i = 2; i*i < x; i++){
		if(x % i == 0) return false;
	}
	return true;
}

int main(){
	ll x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}