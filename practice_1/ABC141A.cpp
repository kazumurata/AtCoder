#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S, ans;
    cin >> S;
    vector<string> w = {"Sunny","Cloudy","Rainy","Sunny"};
    for (int i=0; i<3; i++) {
        if (S==w[i]) ans = w[i+1];
    }
    cout << ans << endl;
}