#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

bool vowel(char c){
	if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') return true;
	else return false;
}

string s, t;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	cin >> t;
	bool flag = true;
	if(s.size() == t.size()){
		for(int i = 0; i < s.size(); i++){
			if(vowel(s[i]) != vowel(t[i]))
				flag = false;
		}
	}else flag = false;

	cout << (flag ? "YES\n" : "NO\n");

	return 0;
}
