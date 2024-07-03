#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a = 240 - k;
	int S = 0, res;
	for (int i = 1; i <= n; i++){
		S += 5 * i;
		if (S > a){
			res = i - 1;
			break;
		}
	}
	if (S <= a){
		res = n;
	}
	cout << res << endl;
	return 0;
}
