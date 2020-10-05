#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string S;
    cin >> S;
    int N;
    int x = 1; //1からスタート
    N = S.size();
    for (int i=1; i<N; i += 2) {
        if (S.at(i)=='+') {
            x++;
        }
        else if (S.at(i)=='-') {
            x--;
        }
        else {
            cout << "error" << endl;
            break;
        }
    }
    cout << x << endl;
}