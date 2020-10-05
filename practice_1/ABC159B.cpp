#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string S;
    cin >> S;
    int N = S.size();
    string ans = "No";

    string S1;
    for (int i=0; i<=((N-1)/2)-1; i++) {
        S1.push_back(S[i]);
    }

    string S_temp = S;
    string S1_temp = S1;
    reverse(S_temp.begin(),S_temp.end());
    reverse(S1_temp.begin(),S1_temp.end());
    if (S == S_temp and S1 == S1_temp) {
        ans = "Yes";
    }
    cout << ans << endl;
}