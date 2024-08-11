#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    int res = 6 - max(a, b) + 1;
    int temp = __gcd(res, 6);
    cout << res / temp << "/" << 6 / temp << endl;
    return 0;
}