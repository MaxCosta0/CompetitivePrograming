#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

struct snode{
	int sum;
	int prefix;
	int suffix;
	int best;

	snode(){
		prefix = suffix = best = -INF;
		sum = -INF;
	}

	snode(int val){
		sum = prefix = suffix = best = val;
		
	}
};	

#define MAXN 50010

int N, M;
vi A;
snode segtree[MAXN<<2];

snode merge(snode x, snode y){
	snode z;

	z.sum = x.sum + y.sum;
	z.prefix = max(x.prefix, x.sum + y.prefix);
	z.suffix = max(y.suffix, x.suffix + y.sum);
	z.best = max({x.best, y.best, x.suffix + y.prefix});
	return z;
}

void build(int node, int left, int right){
	if(left == right){
		segtree[node] = snode(A[left]);
	}

	else{
		int mid = (left+right)>>1;
		int l = node<<1;
		int r = l+1;

		build(l, left, mid);
		build(r, mid+1, right);

		segtree[node] = merge(segtree[l], segtree[r]);
	}
}

void update(int node, int left, int right, int idx, int value){
	if(idx < left || idx > right)
		return;

	else if(left == right){
		segtree[node] = snode(value);
	}

	else{
		int mid = (left+right)>>1;
		int l = node<<1;
		int r = l+1;

		if(idx <= mid)
			update(l, left, mid, idx, value);

		else
			update(r, mid+1, right, idx, value);

		segtree[node] = merge(segtree[l], segtree[r]);
	}
}

snode query(int node, int left, int right, int i, int j){
	if(i > right || j < left){
		snode tmp;
		tmp.sum = 0;
		return tmp;
	}

	else if(i <= left && j >= right)
		return segtree[node];

	else{
		int mid = (left+right)>>1;
		int l = node<<1;
		int r = l+1;

		return merge(query(l, left, mid, i, j), query(r, mid+1, right, i, j));

	}

}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y, op;

	cin >> N;
	A.assign((N<<4)+1, 0);

	for(int i = 1; i <= N; i++){
		cin >> A[i];
	}

	build(1, 1, N);

	cin >> M;

	while(M--){
		cin >> op >> x >> y;

		if(op){
			cout << query(1, 1, N, x, y).best << "\n";
		}else{
			update(1, 1, N, x, y);
		}

	}

	return 0;
}
