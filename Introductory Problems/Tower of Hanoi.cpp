#include <bits/stdc++.h>

using namespace std;

void solve(int x, int y, int z, int n){
    if(n==0) return;
    solve(x,z,y,n-1);
    cout<<x<<' '<<z<<'\n';
    solve(y,x,z,n-1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    cout<<(1<<n)-1<<'\n';
    solve(1,2,3,n);
    return 0;
}