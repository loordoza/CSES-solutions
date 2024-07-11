#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1000000007;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n;
    cin>>n;
    vector<long long>ans(n+1);
    ans[0]=0,ans[1]=0,ans[2]=1;
    for(int i=3; i<=n; ++i)
        ans[i] = ((i-1)*(ans[i-1]+ans[i-2]))%MOD;
    cout<<ans[n];
    return 0;
}