#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define int long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

struct nody{
	int prefix;
	int suffix; 
	int sum;
	int maxSubSum;

	nody(){
		prefix = suffix = sum = maxSubSum = - INF;
	}
};

int N, M, x, y;
int A[50010];
nody segtree[4*50010];

void recalculate(int node){
	segtree[node].sum = segtree[2*node].sum + segtree[2*node+1].sum;
	segtree[node].prefix = max(segtree[2*node].prefix, (segtree[2*node].sum + segtree[2*node+1].prefix));
	segtree[node].suffix = max(segtree[2*node+1].suffix, (segtree[2*node+1].sum + segtree[2*node].suffix));
	segtree[node].maxSubSum = max(segtree[2*node].suffix + segtree[2*node+1].prefix, max(segtree[2*node].maxSubSum, segtree[2*node+1].maxSubSum));
}

void build(int node, int left, int right){
	if(left == right){
		segtree[node].prefix = A[left];
		segtree[node].suffix = A[left];
		segtree[node].sum = A[left];
		segtree[node].maxSubSum = A[left];
	}
	else{
		int mid = (left+right)/2;
		build(2*node, left, mid);
		build(2*node+1, mid+1, right);

		recalculate(node);
	}
}

nody query(int node, int left, int right, int ql, int qr){
	if(ql <= left && qr >= right)
		return segtree[node];

	else if(ql > right || qr < left)
		return segtree[0];

	else{
		int mid = (left+right)/2;
		nody leftNode, rightNode, fatherNode;

		leftNode = query(2*node, left, mid, ql, qr);
		rightNode = query(2*node+1, mid+1, right, ql, qr);

		fatherNode.sum = leftNode.sum +rightNode.sum;
		fatherNode.prefix = max(leftNode.prefix, (leftNode.sum + rightNode.prefix));
		fatherNode.suffix = max(rightNode.suffix, (rightNode.sum + leftNode.suffix));
		fatherNode.maxSubSum = max(leftNode.suffix + rightNode.prefix, max(leftNode.maxSubSum, rightNode.maxSubSum));
		return fatherNode; 
	}
}



int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> A[i];
	}

	build(1, 1, N);

	cin >> M;

	for(int i = 0; i < M; i++){
		cin >> x >> y;
		nody ans = query(1, 1, N, x, y);
		cout << ans.maxSubSum << "\n";

	}

	return 0;

}
