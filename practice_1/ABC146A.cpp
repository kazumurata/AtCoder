#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S;
    vector<string> vec = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    cin >> S;
    int I;
    for (int i=0; i<7; i++) {
        if (vec[i]==S) {
            I = i;
            break;
        }
    }
    int ans = 7-I;
    cout << ans << endl;
}