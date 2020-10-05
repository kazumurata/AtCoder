#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main() {
    int K;
    cin >> K;
    vector<int> vec(K+1,0);
    for (int a=1; a<=K; a++) {
        for (int b=1; b<=K; b++) {
            vec[gcd(a,b)]++;
        }
    }
    int N = vec.size();
    /*
    for (int i=0; i<N; i++) {
        cout << vec[i] << endl;
    }
    */
    ll ans = 0;
    for (int c=1; c<=K; c++) {
        for (int i=1; i<N; i++) {
            ans += gcd(i,c) * vec[i];
        }
    }
    cout << ans << endl;
}