#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string text,pattern;
    cin>>text>>pattern;
    string s = pattern+"#"+text;
    vector<int>kmp(s.size()+1, 0);
    kmp[0]=-1;
    int i=-1,ans=0;
    for(int j=1; j<=s.size(); ++j) {
        while(i>=0 && s[j-1] != s[i])
            i = kmp[i];
        i++;
        kmp[j] = i;
        if(j>pattern.size() && kmp[j]==pattern.size())
            ans++;
    }
    cout<<ans;
    return 0;
}