#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

string res(string a){
    for (int i = 0; i < 3; ++i){
        a[i] = tolower(a[i]);
    }
    return a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        string a;
        getline(cin, a);
        if (res(a) == "yes"){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}