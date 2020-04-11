#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

vi even;
vi odd;
int v;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 10; i++){
		cin >> v;
		if(v%2 == 0) even.pb(v);
		else odd.pb(v);
	}

	for(int i = 0; i < even.size(); i++){
		cout << even[i] << " ";
	}

	cout << "\n";

	for(int i = 0; i < odd.size(); i++){
		cout << odd[i] << " ";
	}

	cout << "\n";


	return 0;
}