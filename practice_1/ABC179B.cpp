#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> D1(N), D2(N);
    for (int i=0; i<N; i++) {
        cin >> D1[i] >> D2[i];
    }
    
    string ans = "No";
    for (int i=0; i<N-2; i++) {
        if (D1[i]==D2[i] and D1[i+1]==D2[i+1] and D1[i+2]==D2[i+2]) {
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
}