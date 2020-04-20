
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

int N, ai, stamina; 
int max_range = - 1;
int min_range = INF;
int min_stamina = INF;
vector<int> X;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> ai;
		X.pb(ai);
		max_range = max(max_range, ai);
		min_range = min(min_range, ai);
	}


	for(int i = min_range; i <= max_range; i++){
		stamina = 0;
		for(int j = 0; j < N; j++){
			stamina += (X[j]-i)*(X[j]-i);
		}
		min_stamina = min(stamina, min_stamina);
	}

	cout << min_stamina << "\n";

	return 0;		
}