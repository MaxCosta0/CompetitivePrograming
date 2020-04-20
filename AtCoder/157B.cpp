
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define MAXN 10005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

int bingo[3][3], b[10];
int lines[3] = {3, 3, 3};
int cols[3] = {3, 3, 3};
int dp = 3;
int ds = 3;
int N;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> bingo[i][j];
		}
	}

	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> b[i];
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < N; k++){

				if(bingo[i][j] == b[k]){
					lines[i]--;
					cols[j]--;

					if(i == j){
						dp--;
					}

					if(i+j == 2){
						ds--;
					}

					break;
				}
			}
		}
	}

	for(int i = 0; i < 3; i++){
		if(lines[i] == 0){
			cout << "Yes\n";
			return 0;
		}

		if(cols[i] == 0){
			cout << "Yes\n";
			return 0;
		}

	}

	if(dp == 0 or ds == 0){
		cout << "Yes\n";
		return 0;
	}

	cout << "No\n";

	return 0;		
}