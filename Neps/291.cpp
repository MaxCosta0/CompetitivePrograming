#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
//#define MAXN 10005
//#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int C, F;
int caracteres[2010];
int aparicoes[2010];
int memo[2010][2010];

int solve(int frase, int cap){
	if(cap < 0) return -INF;
	if(frase == F) return 0;

	int &dp = memo[frase][cap];
	if(dp != -1) return dp;

	return dp = max( aparicoes[frase] + solve(frase+1, cap - caracteres[frase]), solve(frase+1, cap) );
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n = 1;

	while(true){
		cin >> C >> F;

		if(C == 0 and F == 0) break;

		cout << "Teste " << n << "\n";

		for(int i = 0; i < F; i++){
			cin >> caracteres[i] >> aparicoes[i];
		}

		memset(memo, -1, sizeof memo);

		cout << solve(0, C) << "\n\n";

		n++;
	}

	return 0;	
}

