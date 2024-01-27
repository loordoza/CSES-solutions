#include <bits/stdc++.h>

using namespace std;

#define INF LLONG_MAX
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>> D(n, vector<ll>(n, INF));
    int a,b,c;
    for(int i=0; i<m; ++i) {
        cin>>a>>b>>c;
        a--; b--;
        if(c < D[a][b])
            D[a][b] = D[b][a] = c;
    }

    for(int i=0; i<n; ++i) 
        D[i][i] = 0;

    for(int k=0; k<n; ++k)
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j)
                if(D[i][k] != INF && D[k][j] != INF)
                    D[i][j] = min(D[i][j], D[i][k]+D[k][j]);
                
    while(q--) {
        cin>>a>>b;
        a--; b--;
        if(D[a][b] == INF) 
            cout<<-1<<'\n';
        else 
            cout<<D[a][b]<<'\n';
    }
    return 0;
}