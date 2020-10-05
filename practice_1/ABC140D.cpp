#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    vector<pair<char,ll>> vec;
    vec.push_back({S[0],1});
    for (ll i=1; i<N; i++) {
        ll n = vec.size();
        if (S[i]==S[i-1]) vec[n-1].second++;
        else vec.push_back({S[i],1});
    }
}