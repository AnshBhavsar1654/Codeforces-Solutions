#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    ll n, k, x, summin, summax;
    cin >> n >> k >> x;
    summin = k*(k+1)/2;
    summax = n*(n+1)/2 - (n-k)*(n-k+1)/2;
    if(x>=summin && x<=summax) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
}