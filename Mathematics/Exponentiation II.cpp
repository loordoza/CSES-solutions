#include <bits/stdc++.h>
 
using namespace std;

long long pow(long long a, long long exp, long long MOD) {
    long long res=1;
    while(exp) {
        if(exp%2)
            res = (a*res)%MOD;
        a = (a*a)%MOD;
        exp/=2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    long long a,b,c;
    long long MOD = 1000000007;
    while(n--) {
        cin>>a>>b>>c;
        cout<<pow(a,pow(b,c,MOD-1),MOD)<<'\n';
    }
    return 0;
}