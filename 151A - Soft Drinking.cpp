#include <bits/stdc++.h>

using namespace std;

int min(int a, int b){
	if (a > b){
		return b;
	}
	return a;
}

int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int x = k * l / nl, y = c * d, z = p / np;
	cout << min(x, min(y, z)) / n << endl;
	return 0;
}
