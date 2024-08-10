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
        vector <char> b;
        b.push_back(a[0]);
        for (int i = 1; i < a.length(); i += 2){
            b.push_back(a[i]);
        }
        if (a.length() % 2 != 0){
            b.push_back(a[a.length() - 1]);
        }
        for (int i = 0; i < b.size(); ++i){
            cout << b[i];
        }
        cout << endl;
    }
    return 0;
}