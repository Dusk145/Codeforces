#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[4];
	for (int i = 0; i < 4; i++){
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++){
		for (int j = i + 1; j < 4; j++){
			if (a[i] > a[j]){
				int hv = a[i];
				a[i] = a[j];
				a[j] = hv;
			}
		}
	}
	int x = a[3] - a[0];
	cout << x << " " << a[1] - x << " " << a[2] - x << endl;
	return 0;
}
