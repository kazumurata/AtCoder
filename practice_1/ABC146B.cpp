#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<char> A = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    vector<char> ans(S.size());
    for (int i=0; i<S.size(); i++) {
        for (int j=0; j<26; j++) {
            if (S[i]==A[j]) {
                if (j+N<=25) {
                    ans[i] = A[j+N];
                }
                else {
                    ans[i] = A[j+N-26];
                }
                break;
            }
        }
    }
    for (int i=0; i<S.size(); i++) {
        cout << ans[i];
    }
    cout << endl;
}