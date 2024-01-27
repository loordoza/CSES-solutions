#include <bits/stdc++.h>

using namespace std;

#define INF LLONG_MAX
#define ll long long

struct Edge {
    int src,dst,w;
};

void dfs(int v, vector<bool>& vis, vector<vector<int>>& G) {
    if(vis[v]) return;
    vis[v] = true;
    for(auto u : G[v])
        dfs(u,vis,G);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    int a,b,x;
    vector<Edge> edges;
    vector<vector<int>> G(n),GC(n);
    for(int i=0; i<m; ++i) {
        cin>>a>>b>>x;
        a--; b--;
        edges.push_back({a,b,-x});
        G[a].push_back(b); GC[b].push_back(a);
    }

    vector<bool>vis1(n),vis2(n);
    dfs(0,vis1,G);
    dfs(n-1,vis2,GC);

    vector<ll> dist(n, INF);
    dist[0] = 0;
    for(int i=0; i<n; ++i) {
        for(auto e : edges) {
            if(dist[e.src] != INF && dist[e.src] + e.w < dist[e.dst]) {
                dist[e.dst] = dist[e.src] + e.w;
                if(i==n-1 && vis1[e.dst] && vis2[e.dst]) {
                    cout<<-1;
                    return 0;
                }
            }
        }
    }

    cout<<-dist[n-1];

    return 0;
}