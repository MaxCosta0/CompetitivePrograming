#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
//#define MAXN 10005
//#define MAXM 100005
//#define pi 3.14159265359


typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int N, ci, C;
vi coins;
int memop[1010];
int memol[1010];


//função para verificar se é possivel retornar o troco com as moedas disponiveis
int possible(int x){

	if(x == 0) return 1;
	if(x < 0) return 0;

	if(memop[x] != -1) return memop[x];

	for(int i = 0; i < coins.size(); i++){
		if( possible(x-coins[i]) ) return memop[x - coins[i]] = 1;
	}

	return memop[x] = 0;
}

//funcao para mostrar a menor quantidade de moedas que podem ser usadas no troco
int lowCoins(int x){

	if(x == 0) return 0;
	if(x < 0) return INF;

	if(memol[x] != -1) return memol[x];

	int best = INF;
	for(auto c: coins){
		best = min(best, 1 + lowCoins(x-c));
	}

	return memol[x] = best;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> C;	//Quantidade de moedas e o troco desejado

	for(int i = 0; i < N; i++){
		cin >> ci;
		coins.pb(ci);
	}

	ms(memop, -1, sizeof memol);
	ms(memol, -1, sizeof memol);

	cout << (possible(C) ? "Sim\n" : "Nao\n");
	cout << "Menor quantidade de moedas necessarias: " << lowCoins(C) << "\n";

	return 0;	
}

