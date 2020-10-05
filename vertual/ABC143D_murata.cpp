#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> L(N);
    for (ll i=0; i<N; i++) cin >> L[i];
    vector<ll> length1(pow(10,3),0);
    for (ll i=0; i<N; i++) {
        length1[L[i]-1]++;
    }
    vector<ll> length2(pow(10,3),0);
    length2[0] = length1[0];
    for (ll i=1; i<length1.size(); i++) {
        length2[i] = length2[i-1] + length1[i];
    }

    ll ans = 0;
    for (ll i=0; i<length1.size(); i++) {

        if (length1[i]==0) continue;
        ll j_min = i/2;
        if (i%2!=0) j_min++;
        
        for (ll j=j_min; j<=i; j++) {
            if (length1[j]==0) continue;
            if (i==j) {
                if (length1[i]>=3) {
                    ans += (length1[i]*(length1[i]-1))/2*(length2[j-1]-length2[i-j]) + (length1[i]*(length1[i]-1)*(length1[i]-2))/6;
                }
                else if (length1[i]==2) ans += length2[j-1]-length2[i-j];
                else continue;
            }
            else if (i==2*j) {
                if (length1[j]>=2) ans += length1[i]*length1[j]*(length2[j]-length2[i-j]) + length1[i]*(length1[j]*(length1[j]-1))/2;
                else if (length1[j]==1) ans += length1[i]*(length2[j-1]-length2[i-j]);
            }
            else {
                ans += length1[i]*length1[j]*(length2[j]-length2[i-j]);
            }
        }
    }

    cout << ans << endl;

    /*
    sort(L.begin(),L.end());
    for (ll i=0; i<N-2; i++) {
        for(ll i=0; i<N-1; i++){

        }
    }
    */
}