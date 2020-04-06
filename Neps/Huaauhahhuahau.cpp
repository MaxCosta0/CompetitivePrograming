#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

string laugh, vowel;
int j;
bool funny = true;

bool isvowel(char x){
	if(x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u') return true;
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> laugh;

	for(int i = 0; i < laugh.size(); i++){
		if(isvowel(laugh[i])){
			vowel += laugh[i];
		}
	}

	for(int i = 0, j = vowel.size() - 1; i < j; i++, j--){
		if(vowel[i] != vowel[j]){
			funny = false;
		}
	}

	cout << (funny ? "S\n" : "N\n");

	return 0;
}