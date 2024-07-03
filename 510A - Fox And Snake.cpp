#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a = 2, b = 4;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (i % 2 != 0){
				cout << "#";
			} else if (i == a && j == m){
				cout << "#";
				a += 4;
			} else if (i == b && j == 1){
				cout << "#";
				b += 4;
			} else {
				cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}
