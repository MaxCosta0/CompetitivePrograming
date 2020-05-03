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

int t, n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n;
		vi A(n);
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}

		sort(A.begin(), A.end());

		int mid = A.size()/2;

		int idx = 0;
		int x = 0;

		while(x < n){
			cout << A[mid + idx] << " ";

			if(idx >= 0){
				idx = -idx;
				idx--;
			}else{
				idx = -idx;
			}

			x++;
		}

		cout << "\n";
	}	
	return 0;
}

