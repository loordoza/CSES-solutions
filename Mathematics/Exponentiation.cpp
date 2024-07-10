#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1000000007;

long long pow(long long a, long long exp) {
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
    long long a,b;
    while(n--) {
        cin>>a>>b;
        cout<<pow(a,b)<<'\n';
    }
    return 0;
}