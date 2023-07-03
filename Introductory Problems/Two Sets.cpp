#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>a,b;
    if(n%4==0){
        for(int i=1; i<=n; ++i){
            if(i%4==1 || i%4==0)
                a.push_back(i);
            else
                b.push_back(i);
        }
        cout<<"YES\n";
        cout<<a.size()<<'\n';
        for(auto x : a)
            cout<<x<<' ';
        cout<<'\n'<<b.size()<<'\n';
        for(auto x : b)
            cout<<x<<' ';
    }
    else if(n%4==3){
        for(int i=1; i<=n; ++i){
            if(i%4==1 || i%4==2)
                a.push_back(i);
            else
                b.push_back(i);
        }
        cout<<"YES\n";
        cout<<a.size()<<'\n';
        for(auto x : a)
            cout<<x<<' ';
        cout<<'\n'<<b.size()<<'\n';
        for(auto x : b)
            cout<<x<<' ';
    }
    else
        cout<<"NO";
    return 0;
}