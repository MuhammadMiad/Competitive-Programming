///approach-1 using set
///approach-2
#include<bits/stdc++.h>
using namespace std;
int main(){
string str="edabcfac";
vector<int >v(26,0);
int i=0;
while(i<str.size()){
    v[str[i]-'a']=1;
    i++;
}
string ans;
for(int i=0;i<26;i++){
   char ch='a'+i;
     while(v[i]){
        ans+=ch;
        v[i]--;
     }

}
 cout<<"Sort String:"<<ans<<endl;

return 0;
}

