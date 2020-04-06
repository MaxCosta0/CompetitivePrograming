#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

string title(string F){
	for(int i = 0; i < F.size(); i++){
		if(i == 0 or F[i-1] == ' '){
		 	F[i] = toupper(F[i]);
		}else{
			F[i] = tolower(F[i]);
		}
	}

	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}