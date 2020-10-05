#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i=0; i<n; i++) cin >> v[i];

    ll n0 = (n+1)/2, n1 = n/2;
    vector<ll> v0(n0), v1(n1);
    for (ll i=0; i<n; i++) {
        if (i%2==0) v0[i/2] = v[i];
        else v1[(i-1)/2] = v[i];
    }
    
    vector<ll> cnt0(pow(10,5)+1), cnt1(pow(10,5)+1);
    for (ll i=0; i<n0; i++) cnt0[v0[i]]--;
    for (ll i=0; i<n1; i++) cnt1[v1[i]]--;

    vector<pair<ll,ll>> vec0, vec1;
    for (ll i=1; i<=pow(10,5); i++) {
        if (cnt0[i]!=0) vec0.push_back({cnt0[i],-1*i});
        if (cnt1[i]!=0) vec1.push_back({cnt1[i],-1*i});
    }
    sort(vec0.begin(),vec0.end());
    sort(vec1.begin(),vec1.end());
    ll N0 = vec0.size(), N1 = vec1.size();

    if (N0==1 and N1==1) {
        if (vec0[0].second==vec1[0].second) {
            ll ans = -1 * vec1[0].first;
            cout << ans << endl;
        }
        else cout << 0 << endl;
        return 0;
    }

    pair<ll,ll> fi0={vec0[0].first,vec0[0].second}, fi1={vec1[0].first,vec1[0].second};
    pair<ll,ll> se0={vec0[1].first,vec0[1].second}, se1={vec1[1].first,vec1[1].second};

    ll ans = n;
    if (fi0.second==fi1.second) {
        if (N0!=1 and N1!=1) {
            ans += min( fi0.first + se1.first , se0.first + fi1.first );
        }
        else if (N0==1) ans += fi0.first + se1.first;
        else if (N1==1) ans += se0.first + fi1.first;
    }
    else ans += fi0.first + fi1.first;

    cout << ans << endl;
}