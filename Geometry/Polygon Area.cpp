#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
#define X first
#define Y second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    vector<pair<ll,ll>>pts(n);
    for(int i=0; i<n; ++i)
        cin>>pts[i].X>>pts[i].Y;
    ll ans=0;
    for(int i=0; i<n; ++i) 
        ans += pts[i].X * pts[(i+1)%n].Y - pts[(i+1)%n].X * pts[i].Y;
    cout<<abs(ans);
    return 0;
}