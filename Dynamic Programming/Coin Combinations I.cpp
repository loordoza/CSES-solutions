#include <bits/stdc++.h>
 
using namespace std;
 
const int MOD=1000000007;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<int>c(n);
    for(int i=0; i<n; ++i)
        cin>>c[i];
    vector<int>dp(x+1);
    dp[0]=1;
    for(int i=1; i<=x; ++i){
        for(int j=0; j<n; ++j){
            if(i-c[j]>=0)
                dp[i]=(dp[i]+dp[i-c[j]])%MOD;
        }
    }
    cout<<dp[x];
    return 0;
}