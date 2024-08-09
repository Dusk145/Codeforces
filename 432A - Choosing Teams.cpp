#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        a[i] += m;
    }
    int cnt = 0, temp = 0;
    for (int i = 0; i < n; ++i){
        if (a[i] <= 5){
            ++temp;
        }
        if (temp == 3){
            ++cnt;
            temp = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}