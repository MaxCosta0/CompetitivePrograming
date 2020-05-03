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

string A, B;
int memo[1010][1010];
string ans;

int lcs(int a, int b){

	int &dp = memo[a][b];		//definnindo uma reference para nao digitar memo[a][b] toda hora
	if(dp != -1) return dp;

	if(a == A.size() or b == B.size()) return 0;		//Caso base: se uma das sequencias for vazia, entao retornamos 0;

	if(A[a] == B[b]) return dp = 1 + lcs(a+1, b+1);	//if os elementos sao iguais, entao adicionamos 1 à nossa resposta

	return dp = max(lcs(a+1, b), lcs(a, b+1));	//Se os elementos sao diferentes, entao devemos verificar qual ponteiro vale a pena mover
}

void recover(int a, int b){		//funcao para recuperar os valores da maior subsequencia

	if(a == A.size() or b == B.size()) return;

	if(A[a] == B[b]){		//se os elementos de A e B sao iguais, entao colocamos na nossa reposta
		ans += A[a];
		recover(a+1, b+1);
	}

	else if( lcs(a+1, b) > lcs(a, b+1) )	//Se os elementos sao diferentes
		recover(a+1, b);	// recuperamos para o estado de a+1 se esse retornar uma subsequencia maior

	else
		recover(a, b+1); // caso contrario recuperamos para o estado b+1
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> A >> B;

	ms(memo, -1, sizeof memo);

	recover(0, 0);

	cout << lcs(0, 0) << "\n";	// imprime o tamanho da maior subsequencia
	cout << ans << "\n";	// imprime a maior subsequencia

	return 0;	
}

