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

#define MAXN 1<<17

int N, M;
vi A;
int segtree[MAXN<<2];

int merge(int x, int y, int lvl){
	if(lvl&1){
		return (x | y);
	}else{
		return (x ^ y);
	}
}

void build(int node, int left, int right, int lvl){
	if(left == right)
		segtree[node] = A[left];

	else{
		int mid = (left+right)>>1;
		int l = node<<1;
		int r = l+1;

		build(l, left, mid, lvl-1);
		build(r, mid+1, right, lvl-1);

		segtree[node] = merge(segtree[l], segtree[r], lvl);
	}
}

void update(int node, int left, int right, int idx, int value, int lvl){

	if(idx < left or idx > right)
		return;

	else if(left == right){
		segtree[node] = value;
		A[idx] = value;
	}

	else{
		int mid = (left+right)>>1;
		int l = node<<1;
		int r = l+1;
		int height = right-left+1;

		if(idx <= mid)
			update(l, left, mid, idx, value, lvl-1);
		else
			update(r, mid+1, right, idx, value, lvl-1);

		segtree[node] = merge(segtree[l], segtree[r], lvl);
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;

	cin >> N >> M;
	A.resize( ((1<<N)<<2) + 1, 0);

	for(int i = 1; i <= 1<<N; i++){
		cin >> A[i];
	}

	build(1, 1, 1<<N, N);

	while(M--){
		cin >> x >> y;

		update(1, 1, 1<<N, x, y, N);
		cout << segtree[1] << "\n";
	}

	return 0;
}