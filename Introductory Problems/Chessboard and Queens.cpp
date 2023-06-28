#include <bits/stdc++.h>

using namespace std;

bool board[8][8];
bool vis[8][8];
bool row[8], diag_1[16], diag_2[16];

bool ok(int x, int y) {
    if(row[y]) return false;
    if(diag_1[y-x+7]) return false;
    if(diag_2[y+x]) return false;
    return true;
}

int ans;
void howMany(int x) {
    if(x==8){
        ans++;
        return;
    }
    for(int y=0; y<8; ++y) {
        if(ok(x,y) && board[x][y]) {
            diag_1[y-x+7]=1, diag_2[y+x]=1, row[y]=1;
            howMany(x+1);
            diag_1[y-x+7]=0, diag_2[y+x]=0, row[y]=0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    for(int i=0; i<8; ++i){
        cin>>s;
        for(int j=0; j<8; ++j)
            if(s[j] == '.')
                board[i][j]=1;
            else 
                board[i][j]=0;
    }
    howMany(0);
    cout<<ans;
    return 0;
}