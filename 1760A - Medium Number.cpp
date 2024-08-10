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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        auto it_max = max_element(a, a + 3);
        auto it_min = min_element(a, a + 3);
        for (int i = 0; i < 3; ++i){
            if (i != (it_max - a) && i != (it_min - a)){
                cout << a[i] << endl;
                break; 
            }
        }
    }
    return 0;
}