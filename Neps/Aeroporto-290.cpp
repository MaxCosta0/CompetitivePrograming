#include <bits/stdc++.h>
using namespace std;

int airport[105];
int V, A, X, Y, counter = 1;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){
		cin >> A >> V;
		if(A == 0 and V == 0) break;

		memset(airport, 0, sizeof(airport));
		int maior = -1;
		for(int i = 0; i < V; i++){
			cin >> X >> Y;
			airport[X]++;
			airport[Y]++;
		}

		for(int i = 1; i <= A; i++){
			maior = max(maior, airport[i]);
		}

		cout << "Teste " << counter << "\n";
		for(int i = 1; i <= A; i++){
			if(airport[i] == maior) cout << i << " ";			
		}
		cout << "\n\n";
		counter ++;
	}

	return 0;
}