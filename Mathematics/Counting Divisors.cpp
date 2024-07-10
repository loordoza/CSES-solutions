#include <bits/stdc++.h>
 
using namespace std;

int cnt(int x) {
    int ans=0;
    for(int i=1; i*i<=x; ++i) {
        if(i*i==x)
            ans++;
        else if(x%i==0)
            ans+=2;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    int x;
    while(n--) {
        cin>>x;
        cout<<cnt(x)<<'\n';
    }
    return 0;
}