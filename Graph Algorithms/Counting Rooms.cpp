#include <bits/stdc++.h>

using namespace std;

bool vis[1010][1010];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x, int y){
    vis[x][y]=0;
    for(int i=0; i<4; ++i)
        if(vis[x+dx[i]][y+dy[i]])
            dfs(x+dx[i],y+dy[i]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    char ch;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j){
            cin>>ch;
            if(ch=='.') 
                vis[i][j]=1;
        }
    int ans=0;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=m; ++j){
            if(vis[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}