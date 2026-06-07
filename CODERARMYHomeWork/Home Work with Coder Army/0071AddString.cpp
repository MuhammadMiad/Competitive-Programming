#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    reverse(begin(str1),end(str1));
    reverse(begin(str2),end(str2));
    int carry=0;
    string ans;
    int mn=0;
    while(mn<str1.size()and mn<str2.size()){
        int x=(str1[mn]-'0')+(str2[mn]-'0')+carry;
        ans+=x%10+'0';
        carry=x/10;
        mn++;
    }
    while(mn<str1.size()){
        int x=(str1[mn]-'0')+carry;
        ans+=x%10+'0';
        carry=x/10;
        mn++;
    }
    while(mn<str2.size()){
        int x=(str2[mn]-'0')+carry;
        ans+=x%10+'0';
        carry=x/10;
        mn++;
    }
    while(carry){
        ans+=carry%10+'0';
        carry/=10;
    }
    reverse(begin(ans),end(ans));
    cout<<ans<<endl;


return 0;
}
