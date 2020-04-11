#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int l[3];
int tmp;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> tmp;
			l[i] += tmp;
		}
	}

	for(int i = 0; i < 3; i++){
		cout << "Linha " << i << ": " << l[i] << "\n";
	}

	return 0;
}