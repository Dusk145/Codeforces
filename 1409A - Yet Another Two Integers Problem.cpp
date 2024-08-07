#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		if (a > b){
			swap(a, b);
		}
		int cnt = 0, idx = 10;
		while (a != b){
			if (a + idx > b){
				--idx;
			} else {
				int temp = (b - a) / idx;
				a += temp * idx;
				cnt += temp;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
