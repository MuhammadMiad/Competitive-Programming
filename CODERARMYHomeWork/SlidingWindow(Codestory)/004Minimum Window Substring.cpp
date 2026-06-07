#include<bits/stdc++.h>
using namespace std;
void minWindow(string str, string ss) {
        vector<int>temp(256,0);
        int n=str.size();
        int total=ss.size();
        for(int i=0;i<ss.size();i++){
            temp[ss[i]]++;
        }

        int i=0;
        int j=0;
        int length=INT_MAX;
        string ans ="";
        while(j<n){
             temp[str[j]]--;
             if(temp[str[j]]>=0)total--;

             while(!total){
                 if(length>j-i+1){
                    length=j-i+1;
                    ans=str.substr(i,length+1);
                 }
                 temp[str[i]]++;
                 if(temp[str[i]]>0)total++;
                 i++;

             }
             j++;
        }

        cout<<ans<<endl;
    }
int main(){
    string str,ss;
    cin>>str>>ss;

   minWindow(str,ss);
  // cout<<ans<<endl;


return 0;
}
