#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,last,x;
    long long ans=0;
    cin>>n>>last;
    for(int i=1; i<n; ++i) {
        cin>>x;
        if(last>x)
            ans+=last-x;
        else
            last=x;
    }
    cout<<ans;
    return 0;
}