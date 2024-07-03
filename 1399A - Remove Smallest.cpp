#include <bits/stdc++.h>

using namespace std;

int min(int a, int b){
	if (a < b){
		return a;
	}
	return b;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (a[i] > a[j]){
					int hv = a[i];
					a[i] = a[j];
					a[j] = hv;
				}
			}
		}
		int ok = 1;
		for (int i = 0; i < n - 1; i++){
			if (a[i] + 1 != a[i + 1] && a[i] != a[i + 1]){
				cout << "NO" << endl;
				ok = 0;
				break;
			}
		}
		if (ok){
			cout << "YES" << endl;
		}
	}
	return 0;
}
