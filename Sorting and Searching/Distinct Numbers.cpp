#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    int ans=1;
    for(int i=1; i<arr.size(); ++i)
        if(arr[i]!=arr[i-1])
            ans++;
    cout<<ans;
    return 0;
}