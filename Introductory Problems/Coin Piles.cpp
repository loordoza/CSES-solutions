#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a,b;
    cin>>a>>b;
    if(a<b) swap(a,b);
    if(a>2*b)
        cout<<"NO\n";
    else if((a+b)%3==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}