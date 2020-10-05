#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    string S;
    cin >> S;
    ll cntW=0, cntE=0;
    for (ll i=0; i<N; i++) {
        if (S[i]=='W') cntW++;
        else cntE++;
    }
    vector<pair<ll,ll>> cnt(N,pair<ll,ll>());
    cnt[0] = {0,cntE};
    if (S[0]=='E') cnt[0].second--;
    for (ll i=1; i<N; i++) {
        cnt[i].first = cnt[i-1].first;
        cnt[i].second = cnt[i-1].second;
        if (S[i-1]=='W') cnt[i].first++;
        if (S[i]=='E') cnt[i].second--;
    }
    vector<ll> ans(N);
    for (ll i=0; i<N; i++) ans[i] = cnt[i].first + cnt[i].second;
    sort(ans.begin(),ans.end());

    cout << ans[0] << endl;
}