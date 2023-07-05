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
    sort(x.begin(),x.end());
    long long ans=1;
    for(int i=0; i<n; ++i){
        if(ans<x[i])
            break;
        ans+=x[i];
    }
    cout<<ans;
    return 0;
}