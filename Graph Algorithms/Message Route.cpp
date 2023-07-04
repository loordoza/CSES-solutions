#include <bits/stdc++.h>

using namespace std;

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
    vector<bool>vis(n+1);
    vector<int>dist(n+1);
    queue<int>que;
    que.push(1);
    vis[1]=1;
    dist[1]=1;
    int v;
    while(!que.empty()){
        v=que.front();
        if(v==n)
            break;
        que.pop();
        for(auto u : G[v]){
            if(!vis[u]){
                que.push(u);
                vis[u]=1;
                dist[u]=dist[v]+1;
            }
        }
    }
    if(!vis[n]){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<dist[n]<<'\n';
    vector<int>ans(dist[n]);
    v=n;
    for(int i=dist[n]-1; i>=0; --i){
        ans[i]=v;
        for(auto u : G[ans[i]]){
            if(dist[u]==i){
                v=u;
                break;
            }
        }
    } 
    for(auto a : ans)
        cout<<a<<' ';
    return 0;
}