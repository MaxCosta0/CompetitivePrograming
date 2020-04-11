
#include<bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;

bool twin(char x, char y){
	if(x == '(' and y == ')') return true;
	if(x == '[' and y == ']') return true;
	if(x == '{' and y == '}') return true;
	return false;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	string str;
	stack<char> s;
	bool flag;

	cin >> T;
	while(T--){
		cin >> str;
		flag = true;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '(' or str[i] == '[' or str[i] == '{'){
				s.push(str[i]);
			}else{
				if(s.empty()){
					flag = false;
					break;
				}
				char tmpx = s.top();
				char tmpy = str[i];
				s.pop();
				if(!twin(tmpx, tmpy)){
					flag = false;
					break;
				}
			}
		}

		if(!s.empty()) flag = false;

		cout << (flag ? "S\n" : "N\n");
		while(!s.empty()) s.pop();
	}

	return 0;
}