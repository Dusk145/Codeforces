#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <bool> c(5001, true);

int find_value(vector <int> a, int n, int x){
    for (int i = 0; i < n; ++i){
        if (a[i] == x && c[i]){
            c[i] = false;
            return i + 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    map <int, int> b = {{1, 0}, {2, 0}, {3, 0}};
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        ++b[a[i]];
    }
    int temp = 10000;
    for (auto x : b){
        temp = min(temp, x.second);
    }
    cout << temp << endl;
    if (temp != 0){
        while (temp--){
            cout << find_value(a, n, 1) << " " << find_value(a, n, 2) << " " << find_value(a, n, 3) << endl;
        }
    }
    return 0;
}