#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    // int n;
    // cin >> n;
    vector<char> N(3);
    for (int i=0; i<3; i++) {
        cin >> N[i];
    }
    
    string ans = "No";
    for (int i=0; i<3; i++) {
        if (N[i]=='7') ans = "Yes";
    }
    cout << ans << endl;
}