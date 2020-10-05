#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<char> S(N);
    for (int i=0; i<N; i++) cin >> S[i];
    vector<ll> cnt(N,0);
    
    for (int i=1; i<N-1; i++) {
        ll a1=0, b1=0, a2=0, b2=0;

        for (int j=0; j<i; j++) {
            if (S[i]=='R') {
                if (S[j]=='G') a1++;
                else if (S[j]=='B') b1++;
            }
            else if (S[i]=='G') {
                if (S[j]=='B') a1++;
                else if (S[j]=='R') b1++;
            }
            else if (S[i]=='B') {
                if (S[j]=='R') a1++;
                else if (S[j]=='G') b1++;
            }
        }

        for (int j=i+1; j<N; j++) {
            if (S[i]=='R') {
                if (S[j]=='G') a2++;
                else if (S[j]=='B') b2++;
            }
            else if (S[i]=='G') {
                if (S[j]=='B') a2++;
                else if (S[j]=='R') b2++;
            }
            else if (S[i]=='B') {
                if (S[j]=='R') a2++;
                else if (S[j]=='G') b2++;
            }
        }

        ll temp = a1*b2 + b1*a2;
        ll k = min(i,N-i-1);

        for (int j=1; j<=k; j++) {
            if (S[i]!=S[i-j] and S[i-j]!=S[i+j] and S[i+j]!=S[i]) {
                temp--;
            }
        }

        cnt[i] = temp;
    }

    ll ans = 0;
    for (int i=0; i<N; i++) {
        ans += cnt[i];
    }

    cout << ans << endl;
}