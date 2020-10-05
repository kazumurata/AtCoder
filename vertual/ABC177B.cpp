#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S, T;
    cin >> S >> T;
    ll NS = S.size(), NT = T.size();
    ll N = NS-NT+1;
    vector<ll> vec(N,0);
    for (ll i=0; i<N; i++) {
        for (ll j=0; j<NT; j++){
            if (T[j]!=S[i+j]) vec[i]++;
        }
    }
    sort(vec.begin(),vec.end());
    cout << vec[0] << endl;
}