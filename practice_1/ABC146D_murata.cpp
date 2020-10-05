#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> G(N);
    vector<ll> A(N-1), B(N-1);
    vector<ll> cnt(N,0);
    for (ll i=0; i<N; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        A[i] = a; B[i] = b;
        G[a].push_back(b);
        G[b].push_back(a);
        cnt[a]++; cnt[b]++;
    }
    
    vector<ll> cnt_temp = cnt;
    sort(cnt_temp.begin(),cnt_temp.end(),greater<ll>());
    ll maxc = cnt_temp[0];
    vector<ll> maxint;
    for (ll i=0; i<N; i++) {
        if (cnt[i]==maxc) maxint.push_back(i);
    }
    ll maxi = maxint.size();
}