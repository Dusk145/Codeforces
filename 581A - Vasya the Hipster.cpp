#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (a > b){
		int hv = a;
		a = b;
		b = hv;
	}
	cout << a << " " << (b - a) / 2 << endl;
	return 0;
}
