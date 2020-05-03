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

ll N, x, cont;
ll child[105];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N >> x;

	for(int i = 0; i < N; i++){
		cin >> child[i];
	}

	sort(child, child+N);

	for(int i = 0; i < N-1; i++){
		if(child[i] <= x)
			cont ++;
		else
			break;

		x = x - child[i];
	}

	if(child[N-1] == x)
		cont++;

	cout << cont << "\n";


}

