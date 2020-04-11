#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int X;
int valores[10];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 10; i++){
		cin >> valores[i];
	}
	for(int i = 9; i >= 0; i--){
		cout << valores[i] << "\n";
	}
 	
	return 0;
}

