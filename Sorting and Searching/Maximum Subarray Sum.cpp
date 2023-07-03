#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>x(n);
    for(int i=0; i<n; ++i)
        cin>>x[i];
    long long ans=x[0],tmp=x[0];
    for(int i=1; i<n; ++i) {
        tmp=max(1LL*x[i],tmp+x[i]);
        ans=max(ans,tmp);
    }
    cout<<ans;
    return 0;
}