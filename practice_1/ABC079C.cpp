#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string ABCD;
    cin >> ABCD;

    vector<int> vec(4);
    for (int i=0; i<4;i++) {
        vec.at(i) = ABCD.at(i)-'0';
    }

    vector<char> op(3);
    if (vec.at(0)+vec.at(1)+vec.at(2)+vec.at(3)==7) {
        op={'+','+','+'};
    }
    else if (vec.at(0)+vec.at(1)+vec.at(2)-vec.at(3)==7) {
        op={'+','+','-'};
    }
    else if (vec.at(0)+vec.at(1)-vec.at(2)+vec.at(3)==7) {
        op={'+','-','+'};
    }
    else if (vec.at(0)+vec.at(1)-vec.at(2)-vec.at(3)==7) {
        op={'+','-','-'};
    }
    else if (vec.at(0)-vec.at(1)+vec.at(2)+vec.at(3)==7) {
        op={'-','+','+'};
    }
    else if (vec.at(0)-vec.at(1)+vec.at(2)-vec.at(3)==7) {
        op={'-','+','-'};
    }
    else if (vec.at(0)-vec.at(1)-vec.at(2)+vec.at(3)==7) {
        op={'-','-','+'};
    }
    else if (vec.at(0)-vec.at(1)-vec.at(2)-vec.at(3)==7) {
        op={'-','-','-'};
    }

    for (int i=0; i<3; i++) {
        cout << vec.at(i);
        cout << op.at(i);
    }
    cout << vec.at(3) << "=7" << endl;
}