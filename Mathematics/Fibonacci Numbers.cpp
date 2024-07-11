#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1000000007;

array<array<long long,2>,2> mul(array<array<long long,2>,2>& A, array<array<long long,2>,2>& B) {
    array<array<long long,2>,2> res = {{{0,0},{0,0}}};
    for(int i=0; i<2; ++i)
        for(int j=0; j<2; ++j)
            for(int k=0; k<2; ++k)
                res[i][j] = (res[i][j]+(A[i][k]*B[k][j])%MOD)%MOD;
    return res;
}

array<array<long long,2>,2> pow(array<array<long long,2>,2>& M, long long exp) {
    array<array<long long,2>,2> res = {{{1,0},{0,1}}};
    while(exp) {
        if(exp%2)
            res = mul(M,res);
        M = mul(M,M);
        exp/=2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin>>n;
    array<array<long long,2>,2> M = {{{0,1},{1,1}}};
    M = pow(M,n);
    cout<<M[0][1];
    return 0;
}