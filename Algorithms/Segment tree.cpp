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

int N;
int A[101010];
int segtree[4*101010];

void recalculate(int node){
	segtree[node] = max(segtree[2*node+1], segtree[2*node+2]);
}

void build(int node, int left, int right){
	if(left == right){
		segtree[node] = A[left];
	}else{
		int mid = (left+right)/2;
		build(2*node+1, left, mid);
		build(2*node+2, mid+1, right);
		recalculate(node);
	}
	return;
}

void update(int node, int left, int right, int node2update, int updatevalue){
	if(left == right){
		segtree[node] = updatevalue;
	}else{
		int mid = (left+right)/2;
		if(node2update <= mid)
			update(2*node+1, left, mid, node2update, updatevalue);
		else
			update(2*node+2, mid+1, right, node2update, updatevalue);

		recalculate(node);
			
	}
	return;
}

int query(int node, int left, int right, int x, int y){
	if(x <= left and right <= y)
		return segtree[node];

	if(y < left or x > right)
		return 0;

	int mid = (left+right)/2;
	return max(query(2*node+1, left, mid, x, y), query(2*node+2, mid+1, right, x, y));
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> A[i];
	}

	build(0, 1, N);
	for(int i = 0; i < 2*N-1; i++)
		cout << segtree[i] << " ";

	cout << "\n";


	cout << "Query: " << query(0, 1, N, 3, 7) << "\n";


	update(0, 1, N, 4, 9);
	for(int i = 0; i < 2*N-1; i++)
		cout << segtree[i] << " ";

	cout << "\n";


	cout << "Query: " << query(0, 1, N, 3, 7) << "\n";

	return 0;

}