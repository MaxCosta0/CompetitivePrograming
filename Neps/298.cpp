
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

struct t_highway{
	int dist;
	int x, y;
};

int M, N, U, V, C;
int father[550];
int weight[550];

t_highway highway[124755];
t_highway mst[124755];

bool srt(t_highway a, t_highway b){
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

	cin >> N >> M;

	for(int i = 1; i <= M; i++){
		cin >> highway[i].x >> highway[i].y >> highway[i].dist;
	}

	for(int i = 1; i <= N; i++)
		father[i] = i;

	sort(highway+1, highway+M+1, srt);

	int ans = 0;

	for(int i = 1; i <= M; i++){
		if(find(highway[i].x) != find(highway[i].y) ){
			join(highway[i].x, highway[i].y);
			ans += highway[i].dist;
		}
	}

	cout << ans << "\n";


	return 0;		
}