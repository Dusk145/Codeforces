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
        int n;
        cin >> n;
        int temp;
        if (n <= 1399){
            temp = 4;
        } else if (n >= 1400 && n <= 1599){
            temp = 3;
        } else if (n >= 1600 && n <= 1899){
            temp = 2;
        } else {
            temp = 1;
        }
        cout << "Division " << temp << endl;
    }
    return 0;
}