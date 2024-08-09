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
        char a;
        cin >> a;
        string temp = "codeforces";
        size_t ok = temp.find(a);
        if (ok != string::npos){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}