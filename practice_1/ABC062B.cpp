#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H);

    for (int i=0; i<H; i++) {
        cin >> A.at(i);
    }

    for (int i=0; i<W+2; i++) {
        cout << "#";
    }

    cout << endl;
    for (int i=0; i<H; i++) {
        cout << "#";
        cout << A.at(i);
        cout << "#";
        cout << endl;
    }
    
    for (int i=0; i<W+2; i++) {
        cout << "#";
    }

}