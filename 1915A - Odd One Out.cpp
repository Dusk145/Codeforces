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
        map <int, int> a;
        for (int i = 0; i < 3; ++i){
            int x;
            cin >> x;
            ++a[x];
        }
        for (auto x : a){
            if (x.second == 1){
                cout << x.first << endl;
                break;
            }
        }
    }
    return 0;
}