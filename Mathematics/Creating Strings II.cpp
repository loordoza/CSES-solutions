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
    vector<int>alph(26,0);
    string s;
    cin>>s;
    for(auto ch:s)
        alph[ch-'a']++;
    vector<ll>sil(s.size()+1,1),odw(s.size()+1,1);
    for(int i=2; i<=s.size(); ++i) {
        sil[i] = (i*sil[i-1])%MOD;
        odw[i] = pow(sil[i]);
    }
    ll ans=sil[s.size()];
    for(int i=0; i<'z'-'a'+1; ++i)
        ans = (ans*odw[alph[i]])%MOD;
    cout<<ans;
    return 0;
}