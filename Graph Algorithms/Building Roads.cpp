#include <bits/stdc++.h>

using namespace std;

bool vis[100010];

void dfs(int v, vector<vector<int>>&G){
    vis[v]=1;
    for(auto u : G[v])
        if(!vis[u])
            dfs(u,G);
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
    dfs(1,G);
    vector<int>ans;
    for(int i=2; i<=n; ++i)
        if(!vis[i]){
            dfs(i,G);
            ans.push_back(i);
        }
    cout<<ans.size()<<'\n';
    for(auto a : ans)
        cout<<1<<' '<<a<<'\n';
    return 0;
}