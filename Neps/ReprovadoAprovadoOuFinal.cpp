#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

float N1, N2, media;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N1 >> N2;

	media = (N1*2+N2*3)/5;

	if(media >=7) cout << "Aprovado\n";
	else if(media >= 3) cout << "Final\n";
	else cout << "Reprovado\n"; 

	return 0;
}