#include <bits/stdc++.h>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>dp(n+1);
    for(int i=1; i<n+1; ++i)
        dp[i]=INT_MAX;
    string s;
    for(int i=1; i<=n; ++i) {
        s=to_string(i);
        for(int j=0; j<s.size(); ++j)
            dp[i]=min(dp[i],dp[i-(s[j]-'0')]+1);
    }
    cout<<dp[n];
    return 0;
}