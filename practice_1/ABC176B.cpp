#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string str;
    cin >> str;
    vector<int> N(str.size());
    for (int i=0; i<str.size(); i++) {
        N.at(i) = str.at(i) - '0';
    }
    int sum = 0;
    for (int i=0; i<str.size(); i++) {
        sum += N.at(i);
    }
    if (sum%9 == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}