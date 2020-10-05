#include <bits/stdc++.h>          
using namespace std;               

int main() {

    //
    int N, M;
    cin >> N >> M;
    vector<int> s(M), c(M);
    for (int i=0; i<M; i++) {
        cin >> s[i] >> c[i];
    }

    int x=0;

    //
    if (N==1 and M==0) {
        cout << 0 << endl; exit(0);
    }
    else if (N==2 and M==0) {
        cout << 10 << endl; exit(0);
    } 
    else if (N==3 and M==0) {
        cout << 100 << endl; exit(0);
    }

    //
    else {
        for (int i=0; i<M; i++) {
            for (int j=0; j<M; j++) {
                if (s[i]==s[j] and c[i]!=c[j]) {
                    cout << -1 << endl;
                    exit(0);
                }
            }
        }

        if (N==1) {
            x = c[0];
        }

        else if (N==2) {
            for (int i=0; i<M; i++) {
                if (s[i]==1 and c[i]==0) {
                    x=-1;
                    break;
                }
                else if (s[i]==1 and x/10!=c[i]) {
                    x += 10*c[i];
                }
                else if (s[i]==2 and x%10!=c[i]) {
                    x += c[i];
                }
            }
        }

        else if (N==3) {
            for (int i=0; i<M; i++) {
                if (s[i]==1 and c[i]==0) {
                    x=-1;
                    break;
                }
                else if (s[i]==1 and x/100!=c[i]) {
                    x += 100*c[i];
                }
                else if (s[i]==2 and (x%100)/10!=c[i]) {
                    x += 10*c[i];
                }
                else if (s[i]==3 and (x%100)%10!=c[i]) {
                    x += c[i];
                }
            }
        }
    }
    
    //
    cout << x << endl;
}