#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define int long long
#define ms memset
#define MAXN 100005
#define MAXM 100005
#define pi 3.14159265359

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpii;
typedef priority_queue<int> pqi;
typedef priority_queue<pii, vpii, greater<pii> > dij;

string str;
int t;

bool valid(int x){
	vi A;
	A.assign(4, 0);

	for(int i = 0; i < x - 1; i++){
		int tmp = str[i] - '0';
		A[tmp]++;
	}

	for(int i = x-1; i < str.size(); i++){
		int tmp = str[i] - '0';
		A[tmp]++;

		if(A[1] > 0 and A[2] > 0 and A[3] > 0)
			return true;

		tmp = str[i-x+1] - '0';
		A[tmp]--;
	}

	return false;

}

int solve(){
	int left = 3;
	int right = str.size();
	int ret = INF;

	while(left <= right){
		int mid = left + (right-left)/2;

		if(valid(mid)){
			ret = min(ret, mid);
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}

	if(ret == INF) return 0;
	return ret;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while(t--){
		cin >> str;
		cout << solve() << "\n";

	}

	return 0;
}