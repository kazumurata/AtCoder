#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S, T, U;
    ll A, B;
    cin >> S >> T >> A >> B >> U;
    if (U==S) A--;
    if (U==T) B--;
    cout << A << " " << B << endl;
}