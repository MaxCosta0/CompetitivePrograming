#include <bits/stdc++.h>
using namespace std;

int N, A, total = 0, dias = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> A;
		total += A;
		dias++;
		if(total >= 1000000) break;
	}

	cout << dias << "\n";

	return 0;
}