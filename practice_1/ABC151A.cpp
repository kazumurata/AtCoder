#include <bits/stdc++.h>          
using namespace std;               

int main() {
    char C;
    cin >> C;
    vector<char> abc(26);
    abc = {'a','b','c','d','e','f','g','h','i','j','k',
           'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char ans;
    for (int i=0; i<25; i++) {
        if (C == abc[i]) {
            ans = abc[i+1];
            break;
        }
    }
    cout << ans << endl;
}