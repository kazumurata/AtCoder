#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string strS;
    cin >> strS;
    
    int count;
   
    if (strS == "RRR") {
        count = 3;
    }
    else if (strS == "SRR" or strS == "RRS") {
        count = 2;
    }
    else if (strS == "SSS") {
        count = 0;
    }
    else {
        count = 1;
    }
    cout << count << endl;
}