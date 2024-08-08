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
    cin.ignore();
    while (t--){
        string a;
        getline(cin, a);
        int S1 = a[0] + a[1] + a[2];
        int S2 = a[3] + a[4] + a[5];
        if (S1 == S2){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}