#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

// vector<ll> vec;
/*
ll root(vector<ll> A, ll x) {
    x = A[x];
    return x;
}

void solve(vector<ll> A) {
    int x = 0;
    while (A[x]!=0) {
        vec.push_back(A[x]);
        x = root(A,x);
    }
    vec.push_back(0);
    return;
}
*/
int main() {
    ll N, K, a;
    cin >> N >> K;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) {
        cin >> a;
        A[i] = a - 1;
    }

    vector<ll> roop_judge(N,0);
    roop_judge[0] = 1;
    vector<ll> vec;

    ll x = A[0];
    ll st, L;
    for (ll i=0; i<N; i++) {
        if (roop_judge[A[x]] != 0) {
            vec.push_back(A[x]);
            st = A[x];
            L = i+1;
            break;
        }
        else {
            vec.push_back(A[x]);
            x = A[x];
            roop_judge[A[x]]++;
        }
    }

    ll Lf=1, Lr=0;
    for (ll i=0; i<N; i++) {
        if (vec[i]==st) {
            break;
        }
        Lf++;
    }
    Lr = L-Lf;

    vector<ll> roop(Lr);
    vector<ll> first(Lf);
    for (ll i=0; i<L; i++) {
        if (i<=Lf-1) {
            first[i] = vec[i];
        }
        else {
            roop[i-Lf] = vec[i];
        }
    }

    ll ans;

    if (K<=Lf) {
        ans = first[K-1];
    }

    else {
        K -= Lf;
        ll k = (K%N)-1;
        if (k==-1) k = Lr-1;
        ans = roop[k]+1;
    }

    cout << ans << endl;
}