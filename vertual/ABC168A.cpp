#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    int temp;
    while (N>=10) {
        N %= 10;
    }
    temp = N;
    string ans = "hon";
    if (temp==3) {
        ans = "bon";
    }
    else if (temp==0 or temp==1 or temp==6 or temp==8) {
        ans = "pon";
    }
    cout << ans << endl;
}