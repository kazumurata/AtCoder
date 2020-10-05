#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll A,B_new;
    double B;
    cin >> A >> B;
    B_new = 100*B;
    ll ans;
    ans = (A*B_new)/100;
    cout << ans << endl;
}