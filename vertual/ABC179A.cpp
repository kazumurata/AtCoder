#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;
    if (S[S.size()-1]=='s') S += "es";
    else S += 's';
    cout << S << endl;
}