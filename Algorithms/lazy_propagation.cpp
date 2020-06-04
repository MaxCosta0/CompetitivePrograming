#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define int long long

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int N, Q, x, y, z;
char op;
int A[100010];
int segtree[4*100010];
int lazy[4*100010];

void propagate(int node, int left, int right){
	if(lazy[node]){
		segtree[node] += lazy[node] * (right-left+1);
		if(left != right){
			lazy[2*node] += lazy[node];
			lazy[2*node+1] += lazy[node];
		}
		lazy[node] = 0;
	}
}

void recalculate(int node){
	segtree[node] = segtree[2*node] + segtree[2*node+1];
}

void build(int node, int left, int right){
	if(left == right){
		segtree[node] = A[left];
	}else{
		int mid = (left+right)/2;
		build(2*node, left, mid);
		build(2*node+1, mid+1, right);
		recalculate(node);
	}
}

void update(int node, int left, int right, int ql, int qr, int value){
	propagate(node, left, right);

	if(ql > right || qr < left)
		return;

	if(ql <= left && qr >= right){
		lazy[node] += value; 
		propagate(node, left, right);
	}else{
		int mid = (left+right)/2;
		update(2*node, left, mid, ql, qr, value);
		update(2*node+1, mid+1, right, ql, qr, value);

		recalculate(node);
	}
}

int query(int node, int left, int right, int ql , int qr){
	propagate(node, left, right);

	if(ql <= left && qr >= right)
		return segtree[node];

	if(ql > right || qr < left)
		return 0;

	int mid = (left + right)/2;

	return query(2*node, left, mid, ql, qr) + query(2*node+1, mid+1, right, ql, qr);
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> Q;

	for(int i = 1; i <= N; i++){
		cin >> A[i];
	}

	build(1, 1, N);

	for(int i = 0; i < Q; i++){
		cin >> op >> x >> y >> z;

		if(op == 'Q'){
			cout << query(1, 1, N, x, y) << "\n";
		}else if(op == 'U'){
			update(1, 1, N, x, y, z);
		}
	}	

	return 0;

}
