#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<str.size();i++){
        if(str[i]>='a')lower[str[i]-'a']++;
        else upper[str[i]-'A']++;
    }
    int cnt=0,odd;
    for(int i=0;i<26;i++){
        if(lower[i]%2==0)cnt+=lower[i];
        else if(lower[i]%2!=0){
            cnt+=lower[i]-1;
            odd=1;
        }
        if(upper[i]%2==0)cnt+=upper[i];
        else if(upper[i]%2!=0){
                cnt+=upper[i]-1;
                odd=1;
        }

    }
    cout<<cnt<<endl;


return 0;
}
