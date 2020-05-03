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

int N;

int solve(vector<int>& v){

	if(v.size() == 1) return 0;

	int inv = 0;
	vi u1, u2;

	for(int i = 0; i < v.size()/2; i++)
		u1.pb(v[i]);

	for(int i = v.size()/2; i < v.size(); i++)
		u2.pb(v[i]);

	inv += solve(u1);
	inv += solve(u2);

	u1.pb(INF);
	u2.pb(INF);

	int ini1 = 0;
	int ini2 = 0;

	for(int i = 0; i < v.size(); i++){
		if(u1[ini1] <= u2[ini2]){
			v[i] = u1[ini1];
			ini1++;
		}else{
			v[i] = u2[ini2];
			ini2++;
			inv += u1.size()-ini1-1;
		}
	}

	return inv;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	vi A(N);

	for(int i = 0; i < N; i++)
		cin >> A[i];

	cout << solve(A) << "\n";

	return 0;	
}

