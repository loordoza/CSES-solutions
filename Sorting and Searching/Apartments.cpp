#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n), b(m);
    for(int i=0; i<n; ++i)
        cin>>a[i];
    for(int i=0; i<m; ++i)
        cin>>b[i];    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans=0,i=0,j=0;
    while(i<n && j<m) {
        if(a[i]>=b[j]-k && a[i]<=b[j]+k) {
            i++; j++;
            ans++;
        }
        else if(b[j]+k < a[i])
            j++;
        else if(b[j]-k > a[i])
            i++;
    }
    cout<<ans;
    return 0;
}