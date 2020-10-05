#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll A, B;
    cin >> A >> B;
    ll X=-1;
    for (ll i=0; i<20000; i++) {
        if ((8*i)/100==A and (10*i)/100==B) {
            X = i;
            break;
        }
    }
    cout << X << endl;
}