#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>a;
    int t;
    for(int i=0; i<n; ++i) {
        cin>>t;
        a.push_back({t,i+1});
    }
    sort(a.begin(), a.end());   
    for(int i=0; i<n; ++i) {
        int tmp=x-a[i].first;
        int l=i+1, r=n-1, mid;
        while(l<=r) {
            mid=(l+r)/2;
            if(a[mid].first==tmp) {
                cout<<min(a[i].second,a[mid].second)<<' '<<max(a[i].second,a[mid].second);
                return 0;
            }
            if(a[mid].first<tmp)
                l=mid+1;
            else
                r=mid-1;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}