#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    for (ll i=0; i<N; i++) cin >> S[i];
    sort(S.begin(),S.end());

    vector<pair<string,ll>> cnt;
    cnt.push_back({S[0],1});
    for (ll i=1; i<N; i++) {
        if (S[i]!=S[i-1]) {
            cnt.push_back({S[i],1});
        }
        else {
            cnt[cnt.size()-1].second++;
        }
    }
    ll n = cnt.size();
    
    vector<vector<string>> temp(N+1);
    for (ll i=0; i<n; i++) {
        temp[cnt[i].second].push_back(cnt[i].first);
    }

    vector<string> ans;
    for (ll i=N; i>=0; i--) {
        if (temp[i].size()==0) {
            continue;
        }
        for (ll j=0; j<temp[i].size(); j++) {
            ans.push_back(temp[i][j]);
        }
        break;
    }

    ll nn = ans.size();
    for (ll i=0; i<nn; i++) {
        cout << ans[i] << endl;
    }
}