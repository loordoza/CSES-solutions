#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    int x;
    for(int i=0; i<n; ++i) {
        cin>>x;
        arr.push_back({x,1});
        cin>>x;
        arr.push_back({x,-1});
    }
    sort(arr.begin(), arr.end());
    int tmp=0,ans=0;
    for(int i=0; i<2*n; ++i) {
        tmp += arr[i].second;
        ans = max(ans,tmp);
    }
    cout<<ans;
    return 0;
}