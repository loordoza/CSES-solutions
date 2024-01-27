#include <bits/stdc++.h>

using namespace std;

int find(int v, vector<int>& p) {
    if(v != p[v])
        v = find(p[v],p);
    return v;
}

void join(int a, int b, vector<int>& p, vector<int>& R) {
    if(R[a] < R[b])
        swap(a,b);
    p[b] = a;
    R[a] += R[b];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> p(n);
    for(int i=0; i<n; ++i)
        p[i]=i;
    vector<int> R(n,1);
    int a,b,x,y;
    int ans=1;
    for(int i=0; i<m; ++i) {
        cin>>a>>b;
        a--; b--;
        x = find(a,p), y = find(b,p);
        if(x != y) {
            join(x,y,p,R);
            n--;
            ans = max(ans, max(R[x],R[y]));
        }
        cout<<n<<' '<<ans<<'\n';
    }
    return 0;
}