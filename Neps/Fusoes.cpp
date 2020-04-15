#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;

int N, K, X, Y;
char c;
int father[100005];
int weight[100005];


int find(int x){
	if(father[x] == x) return x;

	return father[x] = find(father[x]);
}

void join(int x, int y){
	x = find(x);
	y = find(y);

	if(x == y)
		return;

	if(weight[x] > weight[y]){
		father[y] = x;
	}

	if(weight[y] > weight[x]){
		father[x] = y;
	}

	if(weight[x] == weight[y]){
		father[x] = y;
		weight[y]++;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> K;

	for(int i = 1 ; i <= N; i++){
		father[i] = i;
	}

	while(K--){
		cin >> c >> X >> Y;
		if(c == 'F')
			join(X, Y);
		else{
			cout << (find(X) == find(Y) ? "S\n": "N\n");
		}
	}

	return 0;		
}