#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    vector<ll> ans;
    if (X>=Y) {
        ans.push_back( A*X + B*Y );
        ans.push_back( 2*C*X );
        ans.push_back( A*(X-Y) + 2*C*Y );
        // ans.push_back( 2*C*(X-Y) + B*Y );
        sort(ans.begin(),ans.end());
    }
    else {
        ans.push_back( A*X + B*Y );
        ans.push_back( 2*C*Y );
        ans.push_back( 2*C*X + B*(Y-X) );
        // ans.push_back( A*X + 2*C*(Y-X) );
        sort(ans.begin(),ans.end());
    }
    cout << ans[0] << endl;
}