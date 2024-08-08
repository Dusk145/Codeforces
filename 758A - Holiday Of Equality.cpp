#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    auto it = max_element(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        cnt += (*it - a[i]);
    }
    cout << cnt << endl;
    return 0;
}