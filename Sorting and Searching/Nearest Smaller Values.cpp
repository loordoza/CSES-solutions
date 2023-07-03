#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>x(n+1),id(n+1);
    int j;
    for(int i=1; i<=n; ++i){
        cin>>x[i];
        j=i-1;
        while(x[j]>=x[i])
            j=id[j];
        id[i]=j;
        cout<<id[i]<<' ';
    }
    return 0;
}