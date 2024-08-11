#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> a(4);
    for (int i = 0; i < 4; ++i){
        cin >> a[i];
    }
    cin.ignore();
    string b;
    getline(cin, b);
    int cnt = 0;
    for (int i = 0; i < b.length(); ++i){
        cnt += a[b[i] - '0' - 1];
    }
    cout << cnt << endl;
    return 0;
}