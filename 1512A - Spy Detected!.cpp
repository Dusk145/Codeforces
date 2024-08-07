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
        map <int, int> b;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            ++b[a[i]];
        }
        for (auto x : b){
            if (x.second == 1){
                auto it = find(a.begin(), a.end(), x.first);
                cout << it - a.begin() + 1 << endl;
                break;
            }
        }
    }
	return 0;
}