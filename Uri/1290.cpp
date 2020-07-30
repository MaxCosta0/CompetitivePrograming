#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define pb push_back
#define ms memset
#define mp make_pair
#define f first
#define s second
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef pair<int, pair<int, int>> piii;

#define MAXN 1500000

map<string, int> mapa;
map<string, int> controle;
pii ans;

void initialize(){
	ans.f = 0;
	ans.s = 0;
	mapa.clear();
	controle.clear();
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){

		int t;

		cin >> t;

		if(t == 0)
			break;

		initialize();

		while(t--){
			int tempo;
			string questao, status;

			cin >> questao >> tempo >> status;
			mapa[questao] = tempo + 20*controle[questao]++;

			if(status == "correct"){
				ans.f++;
				ans.s += mapa[questao];
			}

		}

		cout << ans.f << " " << ans.s << "\n";
	}

	return 0;
}