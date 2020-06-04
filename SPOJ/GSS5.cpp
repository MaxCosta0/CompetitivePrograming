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

struct nody{
	int prefix;
	int suffix;
	int sum;
	int best;

	nody(){
		prefix = suffix = sum = best = -INF;
	}
};

#define MAXN 10010

int N, M, T, ans;
vector<int> A;
nody segtree[MAXN<<2];

nody merge(nody left, nody right){
	nody father;
	father.sum = left.sum + right.sum;
	father.prefix = max(left.prefix, (left.sum + right.prefix));
	father.suffix = max(right.suffix, (left.suffix + right.sum));
	father.best = max({left.suffix + right.prefix, left.best, right.best});

	return father;
}

void build(int node, int left, int right){
	if(left == right){
		segtree[node].sum = A[left];
		segtree[node].prefix = A[left];
		segtree[node].suffix = A[left];
		segtree[node].best = A[left];
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

nody query(int node, int left, int right, int i, int j){

	if(i > right or j < left){
		nody tmp;
		tmp.sum = 0;
		return tmp;
	}

	else if(i <= left and j >= right){
		return segtree[node];
	}

	else{
		int mid = (left+right)>>1;
		int l = node<<1;
		int r = l+1;

		nody x = query(l, left, mid, i, j);
		nody y = query(r, mid+1, right, i, j);

		return merge(x, y);
	}
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x1, x2, y1, y2;
	
	cin >> T;
	while(T--){
		cin >> N;

		ms(segtree, -INF, sizeof segtree);
		A.clear();
		A.assign((N<<2) + 1, 0);

		for(int i = 0; i < N; i++){
			cin >> A[i];
		}

		build(1, 0, N-1);

		cin >> M;

		while(M--){
			int ans = 0;
			cin >> x1 >> y1 >> x2 >> y2;

			if(x2 > y1){
				nody left = query(1, 1, N, x1, y1);
				nody mid = query(1, 1, N, y1+1, x2-1);
				nody right = query(1, 1, N, x2, y2);
				ans = left.suffix + mid.sum + right.prefix;
			}
			else{
				ans = max({ ( query(1, 1, N, x1, x2-1).suffix + query(1, 1, N, x2, y2).prefix ),
							( query(1, 1, N, x2, y1).suffix + query(1, 1, N, y1+1, y2).prefix ),
							( query(1, 1, N, x2, y1).best ) });
			}

			cout << ans << "\n";
		}
	}

	return 0;

}
