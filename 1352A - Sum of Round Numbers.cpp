#include <bits/stdc++.h>

using namespace std;

int res(int n){
	int S = 0;
	while (n){
		if (n % 10 != 0){
			S++;
		}
		n /= 10;
	}
	return S;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		if (n < 10){
			cout << "1" << endl << n << endl;
		} else {
			int a = n, b = 0;
			cout << res(a) << endl;
			while (n){
				if (n % 10 != 0){
					int c = n % 10;
					cout << c * pow(10, b) << " ";
				}
				b++;
				n /= 10;
			}
			cout << endl;
		}
	}
	return 0;
}
