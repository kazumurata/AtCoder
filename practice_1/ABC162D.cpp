#include <bits/stdc++.h>          
using namespace std;        
typedef long long ll;       

int main() {

    //
    ll N;
    cin >> N;
    string S;
    cin >> S;

    //
    ll r=0, g=0, b=0;
    for (ll i=0; i<N; i++) {
        if      (S[i] == 'R') {
            r++;
        }
        else if (S[i] == 'G') {
            g++;
        }
        else if (S[i] == 'B') {
            b++;
        }
    }
    ll count = r * g * b;

    //
    for (ll i=0; i<N-2; i++) {
        for (ll j=i+1; j<N-1; j++) {
            if (2*j-i > N-1) {
                continue;
            }
            else if (S[i]!=S[j] and S[j]!=S[2*j-i] and S[2*j-i]!=S[i]) {
                count--;
            }
        }
    }

    //
    cout << count << endl;
}