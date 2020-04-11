
#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int A, B, C, D;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

 	cin >> A >> B >> C >> D;

 	if(A == C or B == D)
 		cout << "V\n";
 	else
 		cout << "F\n";
 	
	return 0;
}