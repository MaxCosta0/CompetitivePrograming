#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;	

int N, pts;
string resp, gab;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	cin >> gab;
	cin >> resp;

	for(int i = 0; i < N; i++){
		if(gab[i] == resp[i]) pts++;
	}

	cout << pts << "\n";

	return 0;
}