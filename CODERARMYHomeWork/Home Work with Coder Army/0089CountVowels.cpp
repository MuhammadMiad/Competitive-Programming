#include<bits/stdc++.h>
using namespace std;
int CheckVowels(string &str,int index){
   if(index<0)return 0;
   if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u'||str[index]=='A'||str[index]=='E'||str[index]=='I'||str[index]=='O'||str[index]=='U'){
    return 1+CheckVowels(str,index-1);
   }
   return CheckVowels(str,index-1);

}
int main(){
   string str;
   cin>>str;
   int ans=CheckVowels(str,str.size()-1);
   cout<<ans<<endl;


return 0;
}
