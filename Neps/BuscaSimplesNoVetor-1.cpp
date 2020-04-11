#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int vet[10];
int X;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 10; i++){
		cin >> vet[i];
	}

	cin >> X;

	for(int i = 0; i < 10; i++){
		if(vet[i] == X){
			cout << "SIM\n";
			return 0;
		}
	}
	cout << "NAO\n";

	return 0;
}

