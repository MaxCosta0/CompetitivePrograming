#include <bits/stdc++.h>
using namespace std;

float A, B, media;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> A >> B;

	media = (A+B)/2;
	if(media >= 7){
		cout << "Aprovado\n";
	}else if(media < 7 and media >= 4){
		cout << "Recuperacao\n";
	}else{
		cout << "Reprovado\n";
	}

	return 0;
}