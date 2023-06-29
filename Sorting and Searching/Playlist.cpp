#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>k(n);
    vector<bool>is(1000000010);
    for(int i=0; i<n; ++i)
        cin>>k[i];
    int j=0;
    int ans=1;
    is[k[0]]=1;
    for(int i=0; i<n; ++i) {
        if(j<i) {
            is[k[j]]=0;
            is[k[i]]=1;
            j=i;
        }
        while(j+1<n && is[k[j+1]]==0) {
            j++;
            is[k[j]]=1;
            ans=max(j-i+1,ans);
        }
        is[k[i]]=0;
    }
    cout<<ans;
    return 0;
}