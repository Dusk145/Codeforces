#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		int cnt = 0;
		if (a < b){
			for (int i = 10; i >= 1; i--){
					while (a + i < b){
						cnt++;
						a += i;
					}
			}
		} else if (a > b){
			for (int i = 10; i >= 1; i--){
				while (a - i > b){
					cnt++;
					a -= i;
				}
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}
	return 0;
}
