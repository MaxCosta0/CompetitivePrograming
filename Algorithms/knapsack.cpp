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


#define MAXN 2020
#define MAXS 2020

int N, capacidade;

int value[MAXN];
int wgt[MAXS];
int memo[MAXN][MAXS];

int solve(int obj, int cap){	//Cada estado é definido pelo objeto que estou olhando e a capacidade atual da mochila

	if(cap < 0) return -INF;	//Se eu estourei a capacidade da mochila entao, nao devo pegar esse estado, entao coloco um numero mto pequeno

	if(obj == N) return 0;	//Se eu avaliei todos os objetos, entao retorno 0

	int& pdm = memo[obj][cap];	//Isso é uma reference para que eu nao tenha que ficar digitando memo[obj][cap] toda hora
	if(pdm != -1) return pdm;	//Se eu ja tiver calculado esse estado, retorno o valor calculado

	return pdm = max( value[obj] + solve(obj + 1, cap - wgt[obj]) ,  solve(obj + 1, cap)); //A minha resposta será o maior entre pegar o objeto e nao pegar o objeto.
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> capacidade >> N;
	for(int i = 0; i < N; i++){
		cin >> wgt[i] >> value[i];
	}

	memset(memo, -1, sizeof memo);

	cout << solve(0, capacidade) << "\n";

	return 0;	
}

