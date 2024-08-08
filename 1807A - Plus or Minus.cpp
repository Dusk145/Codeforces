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
        int a, b, c;
        cin >> a >> b >> c;
        char d = (a + b == c) ? '+' : '-';
        cout << d << endl; 
    }
    return 0;
}