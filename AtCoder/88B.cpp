
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define MAXN 10005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int N, ai;
int Alice, Bob;
priority_queue<int> cards;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> ai;
		cards.push(ai);
	}

	while(!cards.empty()){
		Alice += cards.top();
		cards.pop();

		if(!cards.empty()){
			Bob += cards.top();
			cards.pop();
		}
	}
	
	cout << Alice - Bob << "\n";


	return 0;		
}