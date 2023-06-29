#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0; i<n; ++i)
        cin>>arr[i].second>>arr[i].first;
    sort(arr.begin(), arr.end());
    int ans=0, tmp=0;
    for(int i=0; i<n; ++i) {
        if(arr[i].second>=tmp) {
            ans++;
            tmp=arr[i].first;
        }
    }
    cout<<ans;
    return 0;
}