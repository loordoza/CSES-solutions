#include <bits/stdc++.h>
 
using namespace std;

const long long MOD = 1000000007;

vector<vector<long long>> mul(vector<vector<long long>>& A, vector<vector<long long>>& B) {
    vector<vector<long long>> res(6,vector<long long>(6));
    for(int i=0; i<6; ++i)
        for(int j=0; j<6; ++j)
            for(int k=0; k<6; ++k)
                res[i][j] = (res[i][j]+(A[i][k]*B[k][j])%MOD)%MOD;
    return res;
}

vector<vector<long long>> pow(vector<vector<long long>>& M, long long exp) {
    vector<vector<long long>> res(6,vector<long long>(6));
    for(int i=0; i<6; ++i)
        res[i][i]=1;
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
    vector<vector<long long>> M(6,vector<long long>(6));
    M[5][5]=1;
    for(int i=0; i<5; ++i) {
        M[i][i+1]=1;
        M[5][i]=1;
    }
    M = pow(M,n);
    cout<<M[5][5];
    return 0;
}