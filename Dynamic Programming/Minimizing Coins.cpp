#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<int>c(n),dp(x+1);
    for(int i=0; i<n; ++i)
        cin>>c[i];
    for(int i=1; i<=x; ++i)
        dp[i]=99999999;
    dp[0]=0;
    for(int i=1; i<=x; ++i){
        for(int j=0; j<n; ++j){
            if(i-c[j]>=0)
                dp[i]=min(dp[i],dp[i-c[j]]+1);
        }
    }
    if(dp[x]==99999999)
        cout<<-1;
    else
        cout<<dp[x];
    return 0;
}