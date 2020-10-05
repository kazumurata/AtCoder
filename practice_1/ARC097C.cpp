#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S; cin >> S;
    ll N = S.size();
    ll K; cin >> K;
    vector<string> vec;
    for (ll i=1; i<=K; i++) {
        for (ll j=0; j<=N-i+1; j++) {
            vec.push_back(S.substr(j,i));
        }
    }
    sort(vec.begin(),vec.end());
    N = vec.size();
    vector<string> ans;
    for (ll i=1; i<N; i++) {
        if (vec[i]!=vec[i-1]) ans.push_back(vec[i]);
    }

    cout << ans[K-1] << endl;
}