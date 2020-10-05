#include <bits/stdc++.h>          
using namespace std;              
typedef long long ll; 

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<char>> c(H,vector<char>(W));
    vector<int> gyou(H,0);
    vector<int> retsu(W,0);
    int black = 0;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cin >> c[i][j];
            if (c[i][j]=='#') {
                gyou[i]++;
                retsu[j]++;
                black++;
            }
        }
    }

    int count = 0;

    for (int s=0; s<(1<<H); s++) {
        for (int t=0; t<(1<<W); t++) {

            int N = black;

            for (int i=0; i<H; i++) {
                if ((s>>i)&1==1) {
                    N -= gyou[i];
                    for (int j=0; j<W; j++) {
                        if ((t>>j)&1==1 and c[i][j]=='#') {
                            N++;
                        }
                    }
                }
            }

            for (int j=0; j<W; j++) {
                if ((t>>j)&1==1) {
                    N -= retsu[j];
                }
            }

            if (N==K) {
                count++;
            }

        }
    }

    cout << count << endl;
}