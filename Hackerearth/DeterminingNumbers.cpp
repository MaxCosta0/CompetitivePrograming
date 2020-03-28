#include <bits/stdc++.h>
using namespace std;

int nums[1000005];
int Ai, N;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> Ai;
		nums[Ai]++;
	}
	for(int i = 0; i <= 1000000; i++){
		if(nums[i] == 1){
			cout << i << " ";
		}
	}
	cout << "\n";

	return 0;
}