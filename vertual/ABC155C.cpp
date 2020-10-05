#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    for (ll i=0; i<N; i++) cin >> S[i];
    sort(S.begin(),S.end());
    vector<pair<ll,string>> cnt1;
    for (ll i=0; i<N; i++) {
        ll n = cnt1.size();
        if (i==0) {
            cnt1.push_back({1,S[i]});
            continue;
        }
        if (S[i]==cnt1[n-1].second) {cnt1[n-1].first++;}
        if (S[i]!=cnt1[n-1].second) {cnt1.push_back({1,S[i]});}
    }
    ll n = cnt1.size();
    ll maxcnt = 0;
    for (ll i=0; i<n; i++) maxcnt = max(maxcnt,cnt1[i].first);
    vector<string> ans;
    for (ll i=0; i<n; i++) {
        if (cnt1[i].first==maxcnt) ans.push_back(cnt1[i].second);
    }
    
    ll nn = ans.size();
    for (ll i=0; i<nn; i++) cout << ans[i] << endl;
}