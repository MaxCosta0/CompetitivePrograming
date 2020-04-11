#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;	

int N, ai;
int a[5];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> ai;
		if(ai%2 == 0) a[2]++;
		if(ai%3 == 0) a[3]++;
		if(ai%4 == 0) a[4]++;
	}

	for(int i = 2; i <=4; i++){
		cout << a[i] << "\n";
	}

	return 0;
}