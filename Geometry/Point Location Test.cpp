#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
#define X first
#define Y second

ll cross(const pair<ll,ll>& A, const pair<ll,ll>& B, const pair<ll,ll>& O) {
    return (A.X-O.X) * (B.Y-O.Y) - (A.Y-O.Y) * (B.X-O.X);
}

void cmp(pair<ll,ll>A, pair<ll,ll>B, pair<ll,ll>C) {
    ll val = cross(A,B,C);
    if(val==0)
        cout<<"TOUCH\n";
    else if(val > 0)
        cout<<"LEFT\n";
    else 
        cout<<"RIGHT\n"; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    pair<ll,ll>pts[3];
    while(t--) {
        for(int i=0; i<3; ++i)
            cin>>pts[i].X>>pts[i].Y;
        cmp(pts[0],pts[1],pts[2]);
    }
    return 0;
}