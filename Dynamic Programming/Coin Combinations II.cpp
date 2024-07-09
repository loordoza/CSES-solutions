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
    for(int i=0; i<n; ++i){
        for(int j=1; j<=x; ++j){
            if(j-c[i]>=0)
                dp[j]=(dp[j]+dp[j-c[i]])%MOD;
        }
    }
    cout<<dp[x];
    return 0;
}

