#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N, I, A, B;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

 	cin >> N;
 	for(int i = 0; i < N; i++){
 		cin >> I;
 		if(I == 1) A ^= 1;
 		else{
 			A ^= 1;
 			B ^= 1;
 		}
 	}

 	cout << A << "\n";
 	cout << B << "\n";
	
	return 0;
}