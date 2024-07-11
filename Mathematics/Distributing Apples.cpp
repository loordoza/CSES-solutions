#include <bits/stdc++.h>
 
using namespace std;

#define ll long long

const ll MOD = 1000000007;

ll pow(ll a){
    ll res=1,exp=MOD-2;
    while(exp) {
        if(exp%2)
            res=(res*a)%MOD;
        exp/=2;
        a=(a*a)%MOD;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<ll>sil(n+m,1),odw(n+m,1);
    for(int i=2; i<n+m; ++i) {
        sil[i] = (i*sil[i-1])%MOD;
        odw[i] = pow(sil[i]);
    }
    ll ans = ((sil[n+m-1]*odw[n-1])%MOD)*odw[m]%MOD;
    cout<<ans;
    return 0;
}