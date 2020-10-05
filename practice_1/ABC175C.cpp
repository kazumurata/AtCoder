#include <bits/stdc++.h>          
using namespace std;       
typedef long long ll;        

int main() {
    ll X, K, D;
    cin >> X >> K >> D;

    //
    ll amari_p, amari_m;
    amari_p = abs(X)%D;
    amari_m = abs(amari_p-D);

    ll p,m;
    p = (abs(X)-amari_p)/D;
    m = p+1;

    ll result;

    if (abs(X)-K*D >= 0) {
        result = abs(X)-K*D;
    }
    else if (K%2 == p%2) {
        result = amari_p;
    }
    else if (m<=K) {
        result = amari_m;
    }
    else {
        result = abs(amari_m-2*D);
    }
    
    
    //
    cout << result << endl;
}