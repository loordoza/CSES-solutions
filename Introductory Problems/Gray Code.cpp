#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<(1<<n); ++i){
        bitset<32> b(i^i>>1);
        string s = b.to_string();
        cout<<s.substr(32-n)<<'\n';
    }
    return 0;
}