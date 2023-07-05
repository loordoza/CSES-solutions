#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0; i<n; ++i)
        cin>>p[i];
    int tmp;
    long long sum,ans=LLONG_MAX;;
    for(int i=0; i<(1<<n); ++i){
        tmp=i;
        sum=0;
        for(int j=0; j<n; ++j){
            if(tmp&1)
                sum+=p[j];
            else
                sum-=p[j];
            tmp>>=1;
        }
        ans=min(ans,abs(sum));
    }
    cout<<ans;
    return 0;
}