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

int N, Q, x, y;
int A[100010];
int segtree[4*100010];
char qu;

void recalculate(int node){
	segtree[node] = min(segtree[2*node], segtree[2*node+1]);
}

void build(int node, int left, int right){
	if(left == right)
		segtree[node] = A[left];

	else{
		int mid = (left+right)/2;

		build(2*node, left, mid);
		build(2*node+1, mid+1, right);
		recalculate(node);
	}
}

void update(int node, int left, int right, int idx, int value){
	if(left == right){
		segtree[node] = value;
		A[idx] = value;
	}else{
		int mid = (left+right)/2;

		if(idx <= mid)
			update(2*node, left, mid, idx, value);
		else
			update(2*node+1, mid+1, right, idx, value);

		recalculate(node);
	}
}

int query(int node, int left, int right, int ql, int qr){
	if(ql <= left && right <= qr)
		return segtree[node];

	if(qr < left || ql > right)
		return INF;

	int mid = (left+right)/2;

	return min(query(2*node, left, mid, ql, qr), query(2*node+1, mid+1, right, ql, qr));

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> Q;

	for(int i = 1; i <= N; i++){
		cin >> A[i];
	}


	build(1, 1, N);


	for(int i = 0; i < Q; i++){
		cin >> qu >> x >> y;

		if(qu == 'q'){
			cout << query(1, 1, N, x, y) << "\n";

		}else{
			update(1, 1, N, x, y);
		}	
	}

	return 0;

}