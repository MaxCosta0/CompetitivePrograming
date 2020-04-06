#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N, cont, tmp = -0x3f3f3f3f, maior;
ll Vi;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

 	cin >> N;
 	for(int i = 0; i < N; i++){
 		cin >> Vi;
 		if(Vi == tmp) cont++;
 		else{
 			maior = max(maior, cont);
 			cont = 1;
 			tmp = Vi;
 		}
 	}

 	maior = max(maior, cont);

 	cout << maior << "\n";

	return 0;
}

