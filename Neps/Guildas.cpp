#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;

int N, M, Q, A, B;
int father[100005];
int pts[100005];

int find(int x){
	if(father[x] == x)
		return x;

	return father[x] = find(father[x]);
}

void join(int x, int y){
	x = find(x);
	y = find(y);

	if(x == y)
		return;

	if(x < y){
		father[y] = x;
		pts[x] += pts[y];
	}else{
		father[x] = y;
		pts[y] += pts[x];
	}

	return;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while(true){

		cin >> N >> M;

		if(N == 0 and M == 0)
			break;

		int cont = 0;
		memset(father, 0, sizeof(father));
		memset(pts, 0, sizeof(pts));

		for(int i = 1; i <= N; i++){
			cin >> pts[i];
			father[i] = i;
		}

		while(M--){
			cin >> Q >> A >> B;

			if(Q == 1){
				join(A, B);
			}else{
				A = find(A);
				B = find(B);

				if(A == 1 and pts[A] > pts[B])
					cont++;
				else if(B == 1 and pts[B] > pts[A])
					cont++;
			}
		}
		cout << cont << "\n";
	}	

	return 0;		
}