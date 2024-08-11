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
    int cnt1 = 0, cnt2 = 0;
    while (t--){
        int a, b;
        cin >> a >> b;
        if (a > b){
            ++cnt1;
        } else if (a < b){
            ++cnt2;
        }
    }
    if (cnt1 == cnt2){
        cout << "Friendship is magic!^^\n";
    } else if (cnt1 > cnt2){
        cout << "Mishka\n";
    } else {
        cout << "Chris\n";
    }
    return 0;
}