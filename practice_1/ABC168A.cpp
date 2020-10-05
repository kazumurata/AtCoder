#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N;
    cin >> N;
    N %= 10;
    string ans;
    if (N==2 or N==4 or N==5 or N==7 or N==9) {
        ans = "hon";
    }
    else if (N==0 or N==1 or N==6 or N==8) {
        ans = "pon";
    }
    else {
        ans = "bon";
    }
    cout << ans << endl;
}