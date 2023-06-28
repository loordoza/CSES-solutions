    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        string s; cin>>s;
        vector<int>arr(30);
        for(int i=0; i<s.size(); ++i)
            arr[s[i]-'A']++;
        int odd=0;
        for(int i=0; i<30; ++i)
            if(arr[i]%2==1)
                odd++;
        if(s.size()%2==0 && odd>0)
            cout<<"NO SOLUTION";
        else if(s.size()%2==1 && odd>1)
            cout<<"NO SOLUTION";
        else {
            string s1;
            char oddCh;
            for(int i=0; i<30; ++i) {
                while(arr[i]>0){
                    if(arr[i]==1) {
                        oddCh=(char)i+'A';
                        break;
                    }
                    s1+=i+'A';
                    arr[i]-=2;
                }
            }
            cout<<s1;
            if(s.size()%2==1) cout<<oddCh;
            for(int i=s1.size()-1; i>=0; --i) cout<<s1[i];
        }

        return 0;
    }