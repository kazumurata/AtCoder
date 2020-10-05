#include <bits/stdc++.h>          
using namespace std;               

int main() {
    //
    int D,G;
    cin >> D >> G;
    vector<int> p(D);
    vector<int> c(D);
    for (int i=0; i<D; i++) {
        cin >> p.at(i) >> c.at(i);
    }
    int Np = 0;
    for (int i=0; i<D; i++) {
        Np += p.at(i);
    }
    int pmax;
    for (int i=1; i<D; i++) {
        if(p.at(i) >= p.at(i-1)) {
            pmax = p.at(i);
        }
    }

    //
    vector<int> score(D);
    for (int i=0; i<D; i++) {
        score.at(i) = 100*(i+1);
    }

    //
    vector<vector<int>> table(D,vector<int>(pmax));
    for (int i=0; i<D; i++) {
        table.at(i).at(0) = score.at(i);
    }
    for(int i=1; i<D; i++) {
        for (int j=0; j<pmax; j++) {
            if (j > p.at(i)-1) {     //jが大きいとき
                table.at(i).at(j) = 0;
            }
            else if (j == p.at(i)-1) {    //ボーナスポイント
                table.at(i).at(j) = table.at(i).at(j-1)+score.at(i)+c.at(i);
            }
            else {                   //通常
                table.at(i).at(j) = table.at(i).at(j-1)+score.at(i);
            }
        }
    }

    //
    vector<int> table_sum(D);
    for (int )
}