#include <bits/stdc++.h>          
using namespace std;               

int main() {
    vector<int> data(5);

    for (int i=0; i<5; i++) {
        cin >> data.at(i);
    }

    int count = 0;
    for(int i=0; i<4; i++) {
        if (data.at(i)==data.at(i+1)) {
            break;
        }
        else {
            count++;
        }
    }

    if (count==4) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
}