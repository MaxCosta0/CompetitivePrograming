
#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N;

int fat(int n){
	if(n == 0) return 1;
	return fat(n-1)*n;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	cout << fat(N) << "\n";

 	
	return 0;
}
