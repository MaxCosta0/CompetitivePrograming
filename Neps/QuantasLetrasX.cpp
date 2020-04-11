#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define pi 3.14159

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

string str;
char C;
int cont;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> str;
	cin >> C;

	for(auto ch: str){
		if(ch == C) cont++;
	}

	cout << cont << "\n";

	return 0;
}

