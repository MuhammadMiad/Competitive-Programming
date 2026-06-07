#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<char>s1(n);
        vector<char>s2(n);
        for(int i=0;i<n;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n;i++){
            cin>>s2[i];
        }
        if(s1==s2){
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        for(int i=0;i<n;i++)if(s1[i]!=s2[i])cnt++;
//        reverse(begin(s2),end(s2));
//        int cnt2=1;
//        for(int i=0;i<n;i++)if(s1[i]!=s2[i])cnt2++;

//        int mn=min(cnt,cnt2);
        int z1=count(begin(s1),end(s1),'0');
        int z2=count(begin(s2),end(s2),'0');

        int dif=abs(z1-z2);
        dif++;
        cout<<min(cnt,dif)<<endl;

     }


return 0;
}
