#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
//#define MAXN 10005
//#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int N, tmp;
vi rooms;

int life(){

	int lifes = 0;
	int max_life = 0;

	for(auto x: rooms){
		lifes = max(0, lifes + x);
		max_life = max(max_life, lifes);
	}

	return max_life;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> tmp;
		rooms.pb(tmp);
	}

	cout << life() << "\n";

	return 0;	
}