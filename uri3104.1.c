#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod(string a, ll b) {
    ll ans = 0 , n = a.size() ;
    for(int i = 0 ; i < n ; i ++) {
        ans = (ans * 10 + a[i] - 48) % b ;
    }
    return ans ;
}
int main() {
    ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
    string a ; cin >> a ;
    ll b ; cin >> b ;
    cout << mod(a, b) << endl ;
}
