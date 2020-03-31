#include <bits/stdc++.h>
using namespace std;

double A, B, division;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> A;
	cin >> B;

	division = A/B;

	printf("%.2f\n", division);

	return 0;
}