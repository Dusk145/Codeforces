#include <bits/stdc++.h>

using namespace std;

int max(int a, int b){
	if (a > b){
		return a;
	}
	return b;
}

int min(int a, int b){
	if (a < b){
		return a;
	}
	return b;
}

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int res = max(a, max(b, c)) - min(a, min(b, c));
	cout << res << endl;
	return 0;
}
