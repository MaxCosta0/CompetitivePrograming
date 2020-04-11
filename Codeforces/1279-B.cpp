#include<bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;

int t, n;
ll s;
int a[100005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> n >> s;
		int id = 0;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < n; i++){
			if(a[i] > a[id]) 
				id = i;

			s -= a[i];

			if(s < 0)
				break;
		}

		if(s >= 0)
			id = -1;
		cout << id+1 << "\n";
	}

	return 0;
}