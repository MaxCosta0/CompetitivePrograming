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

int t, n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;
		vi A(n);
		int ans = 1;

		for(int i = 0; i < n; i++){
			cin >> A[i];
		}

		int maior = -INF;
		int menor = INF;

		for(int i = 0; i < n-1; i++){
			int a = A[i];
			int b = A[i+1];
			if(abs(a-b) <= 2){
				ans++;
			}else{
				maior = max(maior, ans);
				menor = min(menor, ans);
				ans = 1;
			}
		}
		
		maior = max(maior, ans);
		menor = min(menor, ans);

		cout << menor << " " << maior << "\n";
	}

	return 0;	
}

