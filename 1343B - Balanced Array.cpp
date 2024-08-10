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
        vector <int> a(n);
        int even = 2, cnt = 0, odd = 1;
        int Sleft = 0, Sright = 0;
        while (cnt < n / 2){
            a[cnt] = even;
            Sleft += a[cnt];
            even += 2;
            ++cnt;
        }
        while (cnt < n - 1){
            a[cnt] = odd;
            Sright += a[cnt];
            odd += 2;
            ++cnt;
        }
        a[cnt] = Sleft - Sright;
        if (a[cnt] % 2 != 0){
            cout << "YES\n";
            for (int i = 0; i < n; ++i){
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}