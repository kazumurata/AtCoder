#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {

    // input of data
    ll N,M,X;
    cin >> N >> M >> X;
    vector<ll> C(N);
    vector<vector<ll>> A(N,vector<ll>(M));
    for (ll i=0; i<N; i++) {
        cin >> C.at(i);
        for (ll j=0; i<M; j++) {
            cin >> A.at(i).at(j);
        }
    }

    // 
}