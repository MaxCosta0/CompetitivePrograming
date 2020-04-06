#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N, i = 1;

int Hanoi(int x, char origin, char destiny, char tmp){
	if(x == 1) return 1;
	else{
		return Hanoi(x-1, origin, tmp, destiny) + Hanoi(x-1, tmp, destiny, origin) + 1;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){
		cin >> N;
		if(N == 0) break;
		cout << "Teste " << i << "\n";
		cout << Hanoi(N, 'A', 'C', 'B') << "\n";
		i++;
	}
}