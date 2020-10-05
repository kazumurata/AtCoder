#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;   

int main() {
    ll H,W;
    cin >> H >> W;
    ll Ch, Cw, Dh, Dw;
    cin >> Ch >> Cw;
    cin >> Dh >> Dw;
    Ch--; Cw--; Dh--; Dw--;
    vector<vector<char>> maze(H,vector<char>(W));
    for (ll i=0; i<H; i++) {
        for (ll j=0; j<W; j++) {
            cin >> maze[i][j];
        }
    }
}