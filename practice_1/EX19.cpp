#include <bits/stdc++.h>          
using namespace std;               

int main() {

    // input
    vector<vector<int>> input(9,vector<int>(9));

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> input.at(i).at(j);
        }
    }

    // make model
    vector<vector<int>> model(9,vector<int>(9));

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            model.at(i).at(j) = (i+1)*(j+1);
        }
    }

    // judge
    int count = 0;                //間違いの数
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (input.at(i).at(j) != model.at(i).at(j)) {
                count++;
            }
        }
    }

    // output
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cout << model.at(i).at(j);
            if (j != 8) {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << 81-count << endl;
    cout << count << endl;
}