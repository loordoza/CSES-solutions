#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>a;
    int t;
    for(int i=0; i<n; ++i){
        cin>>t;
        a.push_back({t,i+1});
    }
    sort(a.begin(),a.end());
    int tmp,k;
    for(int i=0; i<n; ++i){
        tmp=x-a[i].first;
        k=n-1;
        for(int j=i+1; j<k; ++j){
            while(j+1<k && a[j].first+a[k].first>tmp)
                k--;
            if(a[j].first+a[k].first==tmp){
                cout<<a[i].second<<' '<<a[j].second<<' '<<a[k].second;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}