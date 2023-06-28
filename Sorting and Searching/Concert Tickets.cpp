#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    multiset<int,greater<int>>h;
    int t;
    for(int i=0; i<n; ++i) {
        cin>>t;
        h.insert(t);
    }
    for(int i=0; i<m; ++i) {
        cin>>t;
        auto j = h.lower_bound(t);
        if(j!=h.end()) {
            cout<<*j<<'\n';
            h.erase(j);
        }
        else
            cout<<-1<<'\n';
    }
    return 0;
}