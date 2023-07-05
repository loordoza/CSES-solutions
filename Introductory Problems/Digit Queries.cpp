#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long k;
    cin>>k;
    long long p=9,len=1;
    while(1){
        if(k-p*len<=0)
            break;
        k-=p*len;
        p=p*10;
        len++;
    }
    k--;
    long long tmp=p/9+(k/len);
    string s=to_string(tmp);
    cout<<s[k%len]<<'\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int q;
    cin>>q;
    while(q--)
        solve();
    return 0;
}