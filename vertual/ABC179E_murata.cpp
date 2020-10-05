#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, X, M;
    cin >> N >> X >> M;

    vector<ll> vec1(1,X);
    vector<ll> vec2;
    ll A = X;
    ll rst = 0;
    ll i = 1;
    vector<vector<ll>> mod(M,vector<ll>(2,0));
    mod[A][0] = 1;
    mod[A][1] = 0;
    while (i<N) {
        A = (A*A)%M;
        if (mod[A][0]==1) {
            rst = mod[A][1];
            break;
        }
        vec1.push_back(A);
        mod[A][0] = 1;
        mod[A][1] = i;
        i++;
    }

    ll lv = vec1.size();
    for (ll i=rst; i<lv; i++) {
        vec2.push_back(vec1[i]);
    }
    ll lr = vec2.size();
    ll lf = lv - lr;

    if (lf!=0) {
        vector<ll> vec0(lf,0);
        vec0[0] = vec1[0];
        for (ll i=1; i<lf; i++) {
            vec0[i] = vec0[i-1] + vec1[i];
        }
        ll sumf = vec0[lf-1];

        for (ll i=1; i<lr; i++) {
            vec2[i] += vec2[i-1];
        }
        ll sumr = vec2[lr-1];

        ll ans;
        if (N<=lf) ans = vec0[N-1];
        else {
            ll k = (N-lf)/lr;
            ll l = (N-lf)%lr;
            if (l==0) ans = sumf + sumr*k;
            else ans = sumf + sumr*k + vec2[l-1];
        }

        cout << ans << endl;
    }
    else {
        for (ll i=1; i<lr; i++) {
            vec2[i] += vec2[i-1];
        }
        ll sumr = vec2[lr-1];

        ll ans;
        ll k = N/lr;
        ll l = N%lr;
        if (l==0) ans = sumr*k;
        else ans = sumr*k + vec2[l-1];

        cout << ans << endl;
    }

    
}