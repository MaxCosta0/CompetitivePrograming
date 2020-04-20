
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;

#define MAXN 100005
#define MAXM 1000005


int nodes, edges;
int father[MAXN];
int weight[MAXN];

struct t_edge{
	int dist;
	int x, y;
	
};

t_edge edge[MAXM];
t_edge mst[MAXM];

bool srt(t_edge a, t_edge b){
	return a.dist < b.dist;
}

int find(int x){
	if(father[x] == x) 
		return x;

	return father[x] = find(father[x]);
}

void join(int a, int b){
	a = find(a);
	b = find(b);

	if(weight[a] < weight[b])
		father[a] = b;
	else if(weight[a] > weight[b])
		father[b] = a;
	else{
		father[a] = b;
		weight[b]++;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> nodes >> edges;

	for(int i = 1; i <= edges; i++){
		cin >> edge[i].x >> edge[i].y >> edge[i].dist;
	}

	for(int i = 1; i <= nodes; i++)
		father[i] = i;

	sort(edge+1, edge+edges+1, srt);

	int size = 0;
	for(int i = 0; i <= edges; i++){
		if( find(edge[i].x) != find(edge[i].y) ){
			join(edge[i].x, edge[i].y);

			mst[++size] = edge[i];
		}
	}

	for(int i = 1; i < nodes; i++)
		cout << mst[i].x << " " << mst[i].y << " " << mst[i].dist << "\n";

	return 0;		
}