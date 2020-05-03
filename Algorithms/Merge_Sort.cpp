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

void merge_sort(vector<int> &v){

	if(v.size() == 1) return;	//Se i vetor possui tamanho 1 ele ja esta ordenado

	vector<int> u1, u2;	//Vetores auxiliares para a divisão do vetor original v


	//Dividimos o vetor original em dois vetores auxiliares
	for(int i = 0; i < (v.size()/2); i++)
		u1.push_back(v[i]);

	for(int i = v.size()/2; i < v.size(); i++)
		u2.push_back(v[i]);

	//chamo recursivamente a funçao merge_sort para ordenar u1 e u2
	merge_sort(u1);
	merge_sort(u2);

	//Adiciono um numero infinito ao final de cada um para controle
	u1.push_back(INF);
	u2.push_back(INF);

	//Declaro a posição inicio de cada vetor
	int inicio1 = 0;
	int inicio2 = 0;

	for(int i = 0; i < v.size();i++){

		//Se o vetor u1 possuir o menor valor, entao coloco o valor em v denovo
		if(u1[inicio1] < u2[inicio2]){
			v[i] = u1[inicio1];
			inicio1++;		//Atualizo a posiçao de inicio do meu vetor auxiliar ṕara nao usa-la novamente
		}
		//Caso contrario, entao eu coloco o valor de u2 em v;
		else{
			v[i] = u2[inicio2];
			inicio2++;
		}

	}

	return;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	vector<int> A(n);

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	merge_sort(A);

	for(int i = 0; i < n; i++){
		cout << A[i] << "\n";
	}
	
	return 0;	
}

