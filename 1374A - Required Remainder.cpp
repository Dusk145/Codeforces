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
        int x, y, n;
        cin >> x >> y >> n;
        int temp = (n - y) / x;
        cout << x * temp + y << endl;
    }
    return 0;
}