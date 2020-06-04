#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define pi 3.14159265359

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int t, n;
vector<ll> possibles;

int getlower(int x){
	int left = 0;
	int right = possibles.size()-1;

	while(left <= right){
		int mid = left + (right - left)/2;

		if(possibles[mid] > x)
			right = mid - 1;

		else if(possibles[mid] < x)
			left = mid + 1;

		else 
			return possibles[mid];
	}

	return possibles[right];

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	possibles.pb(2);
	int ant = 2;
	int somant = 2;
	while(true){
		int atual = ant + somant + 3;

		if(atual > 1000000000){
			break;
		}
		possibles.pb(atual);
		somant = somant + 3;
		ant = atual;
	}

	cin >> t;
	while(t--){
		int pyramid = 0;
		cin >> n;
		while(n >= 2){
			int tmp = getlower(n);
			n -= tmp;
			pyramid++;
		}
		cout << pyramid << "\n";
	}

	return 0;

}