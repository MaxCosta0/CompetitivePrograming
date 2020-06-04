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
vi numbers;

int max_sum(){
	int ans = 0;
	int maior = 0;

	//Para encontrarmor a soma maxima de um intervalo, basta encontrar o maior valor que foi possivel
	//encontrar somando os valores do vetor, resetando o valor sempre que uma soma for menor do que 0.
	for(auto x: numbers){
		maior = max(0, maior + x);
		ans = max(ans, maior);
	}

	return ans;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> tmp;
		numbers.pb(tmp);
	}

	cout << max_sum() << "\n";

	return 0;	
}