#include <bits/stdc++.h>          
using namespace std;             
typedef long long ll;  

int main() {
    ll N, K;
    cin >> N >> K;
    ll answer = 0;
    ll mod = pow(10,9)+7;
    ll A = 1;
    ll X = pow(10,10);
    // ll Y = X % mod - mod;
    ll Y = X % mod;
    for (ll i=0; i<10; i++) {
        A *= Y;
        A %= mod;
    }
    A--;
    // A %= mod;

    // cout << A << endl;
    
    ll B = (N-K+1) % mod;
    //ll C = (((N+1)*(N+2)-K*(K+1))/2) % mod;
    ll C = (N*N + 3*N + 2 - K*K -K)/2 % mod;
    answer = A * B + C + 1;
    if (answer>mod) {
        answer -= mod;
    }
    cout << A << " " << B << " " << C << endl;
    cout << answer << endl;
    cout << X%mod << endl;
    cout << mod << endl;
}