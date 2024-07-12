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
    vector<ll>sil(1000001,1),odw(1000001,1);
    for(int i=2; i<1000001; ++i) {
        sil[i] = (i*sil[i-1])%MOD;
        odw[i] = pow(sil[i]);
    }
    int n,a,b;
    cin>>n;
    while(n--) {
        cin>>a>>b;
        cout<<((sil[a]*odw[b])%MOD)*odw[a-b]%MOD<<'\n';
    }
    return 0;
}