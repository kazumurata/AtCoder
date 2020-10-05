#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(M), B(M);
    for (ll i=0; i<M; i++) {
        cin >> A[i] >> B[i];
    }
    vector<vector<ll>> friends(N);
    for (int i=0; i<M; i++) {
        friends.at(A[i]-1).push_back(B[i]-1);
        friends.at(B[i]-1).push_back(A[i]-1);
    }
}