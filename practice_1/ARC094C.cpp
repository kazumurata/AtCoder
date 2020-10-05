#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    vector<int> A(3);
    cin >> A[0] >> A[1] >> A[2];
    sort(A.begin(),A.end());
    ll sa1 = A[2] - A[1], sa2 = A[2] - A[0];
    ll ans;
    if (sa1%2==0 and sa1%2==0) ans = sa1/2 + sa2/2;
    else if (sa1%2!=0 and sa2%2==0) ans = (sa1+1)/2 + sa2/2 + 1;
    else if (sa1%2==0 and sa2%2!=0) ans = sa1/2 + (sa2+1)/2 + 1;
    else ans = min( sa1/2 + sa2/2 + 1 , min(sa1,sa2) + (max(sa1,sa2)-min(sa1,sa2))/2 );

    cout << ans << endl;
}