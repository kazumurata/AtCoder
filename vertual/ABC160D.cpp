#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, X, Y;
    cin >> N >> X >> Y;
    vector<ll> k(N,0);
    for (ll i=1; i<=N-1; i++) {
        for (ll j=i+1; j<=N; j++) {
            if (i<=X) {
                if (j<=X)             {k[j-i]++;}
                else if (X<j and j<Y) {k[min(j-i,X-i+Y-j+1)]++;}
                else                  {k[X-i+j-Y+1]++;}
            }
            else if (X<i and i<Y) {
                if (X<j and j<Y) {k[min(j-i,i-X+Y-j+1)]++;}
                else             {k[min(j-i,i-X+j-Y+1)]++;}
            }
            else {k[j-i]++;}
        }
    }

    for (ll i=1; i<N; i++) {
        cout << k[i] << endl;
    }
}