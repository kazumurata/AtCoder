#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    string S;
    ll Q;
    cin >> S >> Q;

    vector<int> T(Q), F(Q);
    vector<char> C(Q);
    for (ll i=0; i<Q; i++) {
        cin >> T[i];
        if (T[i] == 1) {
            F[i] = 0;
            C[i] = ' ';
        }
        else {
            cin >> F[i] >> C[i];
        }
    }

    //
    ll T1count=0, F1count=0, F2count=0;
    for (ll i=0; i<Q; i++) {
        if (T[i] == 1) {
            T1count++;
        }
        else if (F[i] == 1) {
            if (T1count%2 == 0){
                S = C[i] + S;
            }
            else {
                S = S + C[i];
            }
        }
        else {
            if (T1count%2 == 0) {
                S = S + C[i];
            }
            else {
                S = C[i] + S;
            }
        }
    }
    
    if (T1count%2 != 0) {
        reverse(S.begin(),S.end());
    }
    
    cout << S << endl;
}