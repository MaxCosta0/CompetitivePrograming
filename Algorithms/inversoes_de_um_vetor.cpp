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


int inversoes(vector<int>& v){
	int inv = 0;

	//Se o tamanho do vetor é 1, entao nao ha inversões;
	if(v.size() == 1) return 0;

	vector<int> u1, u2;

	//Separo o vetor em dois vetores de mesmo tamanho
	for(int i = 0; i < v.size()/2; i++)
		u1.push_back(v[i]);

	for(int i = v.size()/2; i < v.size(); i++)
		u2.push_back(v[i]);


	//O numero de inversões de v sera o numero de inversoes de u1 + numero de inversoes de u2
	inv += inversoes(u1);
	inv += inversoes(u2);

	u1.push_back(INF);
	u2.push_back(INF);

	int ini1 = 0;
	int ini2 = 0;

	for(int i = 0; i < v.size(); i++){

		//Se o elemento de u1 for menor do que o elemento de u2, entao apenas coloque em v
		if(u1[ini1] <= u2[ini2]){
			v[i] = u1[ini1];
			ini1++;
		}
		//Caso contrario, se o elemento de u2 é menor do que o elemento de u1, entao temos
		//Uma inversao desse elemento com todos os elementos de u1.
		else{
			v[i] = u2[ini2];
			ini2++;

			inv+= u1.size()-ini1-1; //Todos os elementos restantes de u1 serao maiores do que 
								  //o elemento de u2 que esta sendo analisado;
		}
	}

	return inv;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	
	cin >> N;
	vector<int> A(N);

	for(int i = 0; i < N; i++){
		cin >> A[i];
	}

	cout << inversoes(A) << "\n";

	return 0;	
}

