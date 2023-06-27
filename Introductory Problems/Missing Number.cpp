#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,ans=0,x;
    cin>>n;
    for(int i=1; i<=n; ++i)
        ans ^= i;
    for(int i=1; i<n; ++i) {
        cin>>x;
        ans ^= x;
    }
    cout<<ans;
    return 0;
}