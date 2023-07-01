#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    int a,d;
    for(int i=0; i<n; ++i){
        cin>>a>>d;
        arr.push_back({a,d});
    }
    sort(arr.begin(),arr.end());
    long long ans=0;
    long long time=0;
    for(int i=0; i<n; ++i){
        ans+=arr[i].second-time-arr[i].first;
        time+=arr[i].first;
    }
    cout<<ans;
    return 0;
}