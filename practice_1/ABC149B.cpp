#include <bits/stdc++.h>          
using namespace std;             
typedef long long ll;  

int main() {
    ll A, B, K;
    cin >> A >> B >> K;

    if (K<=A) {
        A -= K;
        // cout << "A" << endl;
    }
    else if (A<K and K<=A+B) {
        B -= K-A;
        A = 0;
        // cout << "B" << endl;
    }
    else {
        A = 0;
        B = 0;
        // cout << "C" << endl;
    }
    cout << A  << " " << B << endl;
}