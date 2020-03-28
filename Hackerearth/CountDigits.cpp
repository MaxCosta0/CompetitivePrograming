#include <bits/stdc++.h>
using namespace std;

string S;
int n[10];
//int zero, one, two, three, four, five, six, seven, eight, nine;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> S;

	for(int i = 0; i < S.size(); i++){
		if(S[i] == '0') n[0]++;
		else if(S[i] == '1') n[1]++;
		else if(S[i] == '2') n[2]++;
		else if(S[i] == '3') n[3]++;
		else if(S[i] == '4') n[4]++;
		else if(S[i] == '5') n[5]++;
		else if(S[i] == '6') n[6]++;
		else if(S[i] == '7') n[7]++;
		else if(S[i] == '8') n[8]++;
		else if(S[i] == '9') n[9]++;
	}

	for(int i = 0; i < 10; i++){
		cout << i << " " << n[i] << endl;
	}

	return 0;
}