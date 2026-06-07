#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t;
cin>>n>>t;
string str;
cin>>str;
for(int i=0;i<n;i++){
    if(str[i]=='B'){
            if(i+t<n)
          swap(str[i],str[i+t]);
         else if(i+1<n)
          swap(str[i],str[i+1]);

        i+=t;
    }
}
cout<<str<<endl;

return 0;
}
