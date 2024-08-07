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
        int a[4];
        for (int i = 0; i < 4; ++i){
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 1; i < 4; ++i){
            if (a[i] > a[0]){
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}