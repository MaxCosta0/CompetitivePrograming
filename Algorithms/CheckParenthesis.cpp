#include<bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	stack<char> s;
	string str;

	cin >> str;

	bool flag = true;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '('){
			s.push(str[i]);
		}else if(str[i] == ')'){
			if(s.empty()){
				flag = false;
				break;
			}else{
				s.pop();
			}
		}
	}

	if(!s.empty()) flag = false;

	cout << (flag ? "Valid\n" : "Invalid\n");

	return 0;
}
