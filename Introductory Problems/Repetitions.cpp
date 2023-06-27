#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int tmp=1,ans=0;
    for(int i=1; i<s.size(); ++i) {
        if(s[i]==s[i-1])
            tmp++;
        else {
            ans=max(tmp,ans);
            tmp=1;
        }
    }
    cout<<max(ans,tmp);
    return 0;
}