#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef long long ll;

int N, M, tmp;
vi Ranges;
vi prizes;
vi Ogres;

int binSrch(int x){
	int left = 0, right = Ranges.size()-1, mid;

	while(left <= right){
		mid = left + (right-left)/2;
		if(x == Ranges[mid])
			return prizes[mid];
		else if(x > Ranges[mid])
			left = mid + 1;
		else 
			right = mid - 1;
	}

	return prizes[left-1];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	Ranges.pb(0);
	for(int i = 1; i < N; i++){
		cin >> tmp;
		Ranges.pb(tmp);
	}

	for(int i = 0; i < N; i++){
		cin >> tmp;
		prizes.pb(tmp);
	}

	for(int i = 0; i < M; i++){
		cin >> tmp;
		Ogres.pb(tmp);
	}

	for(int i = 0; i < M; i++){
		tmp = binSrch(Ogres[i]);
		cout << tmp << " ";
	}
	cout << "\n";

}

