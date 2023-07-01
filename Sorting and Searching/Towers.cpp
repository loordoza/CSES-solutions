#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>arr;
    int k;
    for(int i=0; i<n; ++i) {
        cin>>k;
        auto it = upper_bound(arr.begin(),arr.end(),k);
        if(it==arr.end())
            arr.push_back(k);
        else 
            arr[it-arr.begin()]=k;
    }
    cout<<arr.size();
    return 0;
}