#include <bits/stdc++.h>

using namespace std;

char path[1010][1010];
int dist[1010][1010];
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
    int x_start,y_start;
    int x_end,y_end;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j){
            cin>>ch;
            if(ch=='.') 
                vis[i][j]=1;
            else if(ch=='A'){
                x_start=i;
                y_start=j;
            }
            else if(ch=='B'){
                x_end=i;
                y_end=j;
                vis[i][j]=1;
            }
        }
    queue<pair<int,int>>que;
    que.push({x_start,y_start});
    pair<int,int>v;
    while(!que.empty()){
        v=que.front();
        if(v.first==x_end && v.second==y_end)
            break;
        que.pop();
        for(int i=0; i<4; ++i)
            if(vis[v.first+dx[i]][v.second+dy[i]]){
                que.push({v.first+dx[i],v.second+dy[i]});
                vis[v.first+dx[i]][v.second+dy[i]]=0;
                dist[v.first+dx[i]][v.second+dy[i]]=dist[v.first][v.second]+1;;
                if(i==0)      path[v.first+dx[i]][v.second+dy[i]] = 'U';
                else if(i==1) path[v.first+dx[i]][v.second+dy[i]] = 'R';
                else if(i==2) path[v.first+dx[i]][v.second+dy[i]] = 'D';
                else          path[v.first+dx[i]][v.second+dy[i]] = 'L';
            }
    }
    if(vis[x_end][y_end]) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    cout<<dist[x_end][y_end]<<'\n';
    vector<char>ans(dist[x_end][y_end]);
    v={x_end,y_end};
    for(int i=ans.size()-1; i>=0; --i){
        ans[i]=path[v.first][v.second];
        if(ans[i]=='U')         v={v.first+1,v.second};
        else if(ans[i]=='R')    v={v.first,v.second-1};
        else if(ans[i]=='D')    v={v.first-1,v.second};
        else                    v={v.first,v.second+1};
    }
    for(auto a : ans)
        cout<<a;
    return 0;
}