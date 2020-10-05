#include <bits/stdc++.h>          
using namespace std;               

int main() {

    // input of data
    int N,M;
    cin >> N >> M;
    vector<vector<int>> data(M,vector<int>(2));
    for (int i=0; i<M; i++) {
        for (int j=0; j<2; j++) {
            cin >> data.at(i).at(j);
        }
    }

    //calculate
    vector<vector<char>> result(N,vector<char>(N,'-')); //make result

    for (int i=0; i<M; i++) {
        result.at(data.at(i).at(0)-1).at(data.at(i).at(1)-1)='o'; //oを記入
        result.at(data.at(i).at(1)-1).at(data.at(i).at(0)-1)='x'; //xを記入
    }

    //表示
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << result.at(i).at(j);
            if (j!=N-1) {
                cout << ' ';
            }
            else {
                cout << endl;
            }
        }
    }
}