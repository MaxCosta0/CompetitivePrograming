#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;

int N, x, M;
vi q;
vi aux;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> x;
		q.pb(x);
	}

	cin >> M;
	for(int i = 0; i < M; i++){
		cin >> x;
		aux.pb(x);
	}

	for(int i = 0; i < q.size(); i++){
		bool y = false;
		for(int j = 0; j < aux.size(); j++){
			if(q[i] == aux[j]){
				y = true;
				break;
			}
		}
		if(y == false){
			cout << q[i] << " ";
		}
	}
	cout << "\n";

	return 0;
}