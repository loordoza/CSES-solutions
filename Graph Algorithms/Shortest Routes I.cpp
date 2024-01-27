#include <bits/stdc++.h>

using namespace std;

#define INF LLONG_MAX
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<pair<ll, ll>>>G(n+1);
    int a,b,c;
    for(int i=0; i<m; ++i) {
        cin>>a>>b>>c;
        G[a].push_back({b,c});
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> que;
    vector<ll> dist(n+1,INF);
    que.push({0,1});
    dist[1]=0;

    while(!que.empty()) {
        int src = que.top().second;
        ll dis = que.top().first;
        que.pop();

        if(dist[src] != dis)
            continue;

        for(auto e : G[src]) {
            int dest = e.first;
            ll weight = e.second;
            if(dis + weight < dist[dest]) {
                dist[dest] = dis + weight;
                que.push({dist[dest],dest});
            }
        }
    }

    for(int i=1; i<=n; ++i) 
        cout<<dist[i]<<' ';

    return 0;
}