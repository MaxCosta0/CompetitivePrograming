#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N;
string str;
int digits[15];

void sumdigits(char x){
	if(x == '0') digits[0]++;
	else if(x == '1') digits[1]++;
	else if(x == '2') digits[2]++;
	else if(x == '3') digits[3]++;
	else if(x == '4') digits[4]++;
	else if(x == '5') digits[5]++;
	else if(x == '6') digits[6]++;
	else if(x == '7') digits[7]++;
	else if(x == '8') digits[8]++;
	else if(x == '9') digits[9]++;

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> str;
		for(int j = 0; j < str.size(); j++){
			sumdigits(str[j]);
		}
	}

	for(int i = 0; i < 10; i++){
		cout << i << " - " << digits[i] << "\n";
	}

	return 0;
}