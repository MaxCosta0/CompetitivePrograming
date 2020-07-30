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
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

#define MAXN 10010

int n, m, op;
vi A;
pair<int, int> st[MAXN<<2];

pii merge(pii a, pii b){
	if(a.f > b.f)
		return a;

	if(a.f < b.f)
		return b;

	return mp(a.f, a.s + b.s);
}

void build(int node, int left, int right){
	if(left == right)
		st[node] = mp(A[left], 1);

	else{
		int mid = (left+right)>>1;
		int l = node<<1;
		int r = l+1;

		build(l, left, mid);
		build(r, mid+1, right);

		st[node] = merge(st[l], st[r]);
	}
}

void update(int node, int left, int right, int idx, int value){
	if(left == right){
		st[node] = mp(value, 1);
		return;
	}

	int mid = (left+right)>>1;
	int l = node<<1;
	int r = l+1;

	if(idx <= node)
		update(l, left, mid, idx, value);
	else
		update(r, mid+1, right, idx, value);

	st[node] = merge(st[l], st[r]);
}

pii query(int node, int left, int right, int i, int j){
	if(i > right || j < left)
		return mp(-INF, 0);

	else if(i <= left && j >= right)
		return st[node];

	else{
		int mid = (right+left)>>1;
		int l = node<<1;
		int r = l+1;

		return merge(query(l, left, mid, i, j), query(r, mid+1, right, i, j));
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int x, y;

	cin >> n >> m;
	A.resize(n);

	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}

	build(1, 1, n);

	for(int i = 0; i < m; i++){
		cin >> op >> x >> y;

		if(op == 1){
			pii ans = query(1, 1, n, x, y);
			cout << ans.f << " " << ans.s << "\n";
		}

		else
			update(1, 1, n, x, y);
	}

	return 0;
}