#include <bits/stdc++.h>

using namespace std;

bool flag=0;

void dfs(int v, vector<vector<int>>&G, vector<bool>&vis, vector<int>&group){
    vis[v]=1;
    for(auto u : G[v]){
        if(!vis[u]){
            group[u]=(group[v]==1)?2:1;
            dfs(u,G,vis,group);
        }
        else {
            if(group[u]==group[v])
                flag=1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>G(n+1);
    int a,b;
    for(int i=0; i<m; ++i){
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int>group(n+1);
    vector<bool>vis(n+1);
    for(int i=1; i<=n; ++i)
        if(!vis[i]){
            group[i]=1;
            dfs(i,G,vis,group);
        }
    if(flag){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    for(int i=1; i<=n; ++i)
        cout<<group[i]<<' ';
    return 0;
}