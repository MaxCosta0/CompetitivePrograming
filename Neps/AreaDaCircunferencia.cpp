#include <bits/stdc++.h>
using namespace std;

#define pi 3.1416

double R, area;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> R;

	area = pi*R*R;
	printf("%.2f\n", area);
	return 0;
}