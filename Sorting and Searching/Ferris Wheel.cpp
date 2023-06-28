#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<int>p(n);
    for(int i=0; i<n; ++i)
        cin>>p[i];
    sort(p.begin(), p.end());
    int j=0, ans=0;
    for(int i=n-1; i>=j; --i) {
        if(p[i]+p[j]<=x)
            j++;
        ans++;
    }
    cout<<ans;
    return 0;
}