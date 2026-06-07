#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int k;
    cin>>str>>k;
    int cnt=0,ans=0;
    int n=str.size();
    int i=0;
    int j=0;
    set<int>st={'a','e','i','o','u'};
    while(j<n){
        if(st.find(str[j])!=st.end()){
            cnt++;
        }
        if(j-i+1==k){
            ans=max(ans,cnt);
            if(st.find(str[i])!=st.end())cnt--;
            i++;
        }
        j++;
    }
    cout<<ans<<endl;


return 0;
}
