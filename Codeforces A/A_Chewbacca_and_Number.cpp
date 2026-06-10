#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
         ll x;cin>>x;
         string str=to_string(x);
         if(str[0]!='9'  and str[0]>'4' and str[0]<'9'){
            char ch=(9-(str[0]-'0'))+'0';
            str[0]=ch;
         }
         for(int i=1;i<str.size();i++){
             if(str[i]>'4'){
            char ch=(9-(str[i]-'0'))+'0';
            str[i]=ch;
         }
         }

         cout<<str<<endl;

return 0;
}
