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

#define MAXN 100010

int n, m;
vi adj[MAXN];
int grau[MAXN];
vi ordem;
priority_queue< int, vector<int>, greater<int> > q;

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 1; i <= m; i++){
		int x, y;

		cin >> x >> y;

		grau[y]++;
		adj[x].pb(y);
	}

	for(int i = 1; i <= n; i++){
		if(grau[i] == 0)
			q.push(i);
	}

	while(!q.empty()){

		int node = q.top();
		q.pop();

		ordem.pb(node);

		for(auto neighbor: adj[node]){
			grau[neighbor]--;
			if(grau[neighbor] == 0)
				q.push(neighbor);
		}
	}

	if(ordem.size() < n)
		cout << "Sandro fails.";

	else{
		for(int i = 0; i < ordem.size(); i++)
			cout << ordem[i] << " ";

		cout << "\n";
	}

	return 0;
}