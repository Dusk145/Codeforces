#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
const int num = 1000000;

vector <bool> nt(num + 1, true);

void prime(){
    nt[0] = false;
    nt[1] = false;
    for (int i = 2; i <= sqrt(num); ++i){
        if (nt[i]){
            for (int j = i * i; j <= num; j += i){
                nt[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    prime();
    int n;
    cin >> n;
    for (int i = 4; i < n; ++i){
        if (!nt[i] && !nt[n - i]){
            cout << i << " " << n - i << endl;
            break;
        }
    }
    return 0;
}