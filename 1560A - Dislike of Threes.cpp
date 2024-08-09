#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a;

void arr(){
    for (int i = 1; i <= 1666; ++i){
        if (i % 3 != 0 && i % 10 != 3){
            a.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    arr();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << a[n - 1] << endl;
    }
    return 0;
}