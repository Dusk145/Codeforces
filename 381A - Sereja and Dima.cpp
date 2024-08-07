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
    ll S1 = 0, S2 = 0;
    int left = 0, right = n - 1;
    bool ok = true;
    while (left != right){
        int temp;
        if (a[left] > a[right]){
            temp = a[left];
            ++left;
        } else {
            temp = a[right];
            --right;
        }
        if (ok){
            S1 += temp;
        } else {
            S2 += temp;
        }
        ok = (ok) ? false : true;
    }
    if (left == right){
        if (ok){
            S1 += a[left];
        } else {
            S2 += a[right];
        }
    }
    cout << S1 << " " << S2 << endl;
	return 0;
}