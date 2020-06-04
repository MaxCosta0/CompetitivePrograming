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

int n, x;
vi vec;

bool bs(int y){
	int left = 0;
	int right = vec.size();

	while(left <= right){
		int mid = left + (right - left)/2;

		if(vec[mid] < y)
			left = mid + 1;

		else if(vec[mid] > y)
			right = mid - 1;

		else if(vec[mid] == y)
			return true;
	}

	return false;

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> x;
	vec.resize(n);

	for(int i = 0; i < n; i++){
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	for(int i = 0; i < n; i++){
		int resto = abs(x - vec[i]);

		if(bs(resto)){
			cout << vec[i] << " " << resto << "\n";
			return 0;
		}
	}

	cout << "Do not exists\n";

	return 0;

}