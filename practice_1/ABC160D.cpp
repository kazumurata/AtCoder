#include <bits/stdc++.h>          
using namespace std;           
typedef long long ll;    

int main() {

    //
    ll N, X, Y;
    cin >> N >> X >> Y;

    //
    vector<ll> k(N-1,0);
    // k[0] = N;

    //
    for (ll i=1; i<=N-1; i++) {
        for (ll j=i+1; j<=N; j++) {

            if (i<X and j<=X) {
                k[j-i-1]++;
            }

            else if (Y<=i and Y<j) {
                k[j-i-1]++;
            }

            else if (i<=X and Y<=j) {
                k[(j-Y)+(X-i)]++;
            }

            else {
                ll a = min(j-i,abs(Y-j)+abs(X-i)+1);
                k[a-1]++;
            }
            /*
            else if (i<=X and X<j and j<Y) {
                ll a = min(j-i,(Y-j)+(X-i)+1);
                k[a-1]++;
            }

            else if (X<=i and i<Y and X<j and j<=Y) {
                ll a = min(j-i,(Y-j)+(i-X)+1);
                k[a-1]++;
            }

            else if (X<i and i<Y and Y<=j) {
                ll a = min(j-i,(j-Y)+(i-X)+1);
                k[a-1]++;
            }
            */
        }
    }

    for (int i=0; i<N-1; i++) {
        cout << k[i] << endl;
    }
}