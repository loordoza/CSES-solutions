#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    long long ans=1;
    for(int i=0; i<n; ++i) {
        ans*=2;
        ans%=1000000007;
    }
    cout<<ans;
    return 0;
}