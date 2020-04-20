#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<pii> pqpii;

int C, N, T, D, cont, tmp;
priority_queue<int, vector<int>, greater<int> > pq;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> C >> N;

	for(int i = 0; i < C; i++){
		pq.push(0);
	}

	for(int i = 0; i < N; i++){
		cin >> T >> D;
		int tmp = pq.top();
		pq.pop();

		if(tmp > T + 20)
			cont ++;

		pq.push(max(T, tmp) + D);
	}

	cout << cont << "\n";
	
	return 0;		
}



