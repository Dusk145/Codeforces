#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int max = - 1e9, min = 1e9;
	int res = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		for (int j = 0; j < i; j++){
			if (a[j] > max){
				max = a[j];
			} 
			if (a[j] < min){
				min = a[j];
			}
		}
		if (a[i] > max || a[i] < min){
			res++;
		}
	}
	cout << res - 1 << endl;
	return 0;
}
