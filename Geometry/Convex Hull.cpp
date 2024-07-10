#include <bits/stdc++.h>
 
#define X first
#define Y second
#define ll long long
 
using namespace std;
 
pair<ll,ll> p0;
 
ll cross(const pair<ll,ll>& O, const pair<ll,ll>& A, const pair<ll,ll>& B) {
    return (A.X-O.X) * (B.Y-O.Y) - (A.Y-O.Y) * (B.X-O.X);
}
 
bool cmp(const pair<ll,ll>& A, const pair<ll,ll>& B) {
    ll val = cross(p0, A, B);
    if(val == 0)
        return (A.X-p0.X) * (A.X-p0.X) + (A.Y-p0.Y) * (A.Y-p0.Y) < (B.X-p0.X) * (B.X-p0.X) + (B.Y-p0.Y) * (B.Y-p0.Y);
    return val > 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<pair<ll,ll>> points(n);
    for(int i=0; i<n; ++i)
        cin>>points[i].X>>points[i].Y;
 
    int minY=0;
    for(int i=1; i<n; ++i)
        if(points[i].Y < points[minY].Y || (points[i].Y == points[minY].Y && points[i].X < points[minY].X))
            minY = i;
    swap(points[0], points[minY]);
    p0 = points[0];
    sort(points.begin()+1, points.end(), cmp);
 
    vector<pair<ll,ll>> S;
    S.push_back(points[0]);
    S.push_back(points[1]);
    S.push_back(points[2]);
 
    for(int i=3; i<n; ++i) {
        while(S.size() >= 2 && cross(S[S.size()-2], S.back(), points[i]) < 0)
            S.pop_back();
        S.push_back(points[i]);
    }

    int t = S.size();
    for(int i=n-2; i>=0; --i)
        if(cross(p0, S[t-1], points[i]) == 0)
            S.push_back(points[i]);
        else
            break;
 
    cout<<S.size()<<'\n';
    for(auto pt:S)
        cout<<pt.X<<' '<<pt.Y<<'\n';

    return 0;
}