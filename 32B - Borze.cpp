#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    string a;
    getline(cin, a);
    int cnt = 0;
    while (cnt < a.length()){
        if (a[cnt] == '.'){
            cout << "0";
            ++cnt;
        } else {
            if (a[cnt + 1] == '.'){
                cout << "1";
            } else {
                cout << "2";
            }
            cnt += 2;
        }
    }
	return 0;
}