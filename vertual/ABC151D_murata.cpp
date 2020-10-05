#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cin >> S[i][j];
        }
    }

    vector<int> dx = {1,0,-1,0};
    vector<int> dy = {0,1,0,-1};

    queue<pair<int,int>> que;
    vector<vector<int>> ans(H,vector<int>(W,0));
    vector<pair<int,int>> end;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (S[i][j]=='#') continue;
            vector<vector<int>> dist(H,vector<int>(W,-1));
            que.push({i,j});
            dist[i][j] = 0;
            while (!que.empty()) {
                int x = que.front().first;
                int y = que.front().second;
                ans[x][y] = max(dist[x][y],ans[x][y]);
                que.pop();
                for (int dir=0; dir<4; dir++) {
                    int nx = x+dx[dir];
                    int ny = y+dy[dir];
                    if (nx<0 or ny<0 or nx>=H or ny>=W) continue;
                    if (dist[nx][ny]!=-1) continue;
                    if (S[nx][ny]=='#') dist[nx][ny] = 0;
                    else {
                        dist[nx][ny] = dist[x][y] + 1;
                        que.push({nx,ny});
                    }
                } 
            }
        }
    }

    int answer = 0;
    for (int i=0; i<H; i++) {
        for (int j=0; j<H; j++) {
            if (S[i][j]=='#') continue;
            answer = max(answer,ans[i][j]);
        }
    }

    cout << answer << endl;
    /*
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    */
}