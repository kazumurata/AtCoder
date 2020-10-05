#include <bits/stdc++.h>          
using namespace std;               

int main() {

    // input of data
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<char>> c(H,vector<char>(W));
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cin >> c.at(i).at(j);
        }
    }

    // count of black
    int count1 = 0;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if(c.at(i).at(j) == '#') {
                count1++;
            }
        }
    }
    //特別解
    if (count1 == K) {
        cout << 0 << endl;
        exit(0);
    }
    if (count1 < K) {
        cout << 0 << endl;
        exit(0);
    }
    //白を0, 黒を1のベクトル
    vector<vector<int>> C(H,vector<int>(W));
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (c.at(i).at(j) == '.') {
                C.at(i).at(j) = 0;
            }
            else {
                C.at(i).at(j) =1;
            }
        }
    }
    //計算ごりごり
    int count2=0;
    for (int i=0; i<pow(2,H)*pow(2,W); i++) {
        for (int j=i; j<H; j++) {
            for (int k=0; k<H-i-1; k++) {
                for (int l=0; l<W; l++) {
                    C.at(j+k).at(l) = 0;
                }
            }
        }
    }

}