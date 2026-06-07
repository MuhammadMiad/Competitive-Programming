#include<bits/stdc++.h>
using namespace std;
string SubSequence(string &str1,string &str2,vector<vector<int>>&DP){
for(int i=0;i<=str1.size();i++)DP[i][0]=0;
for(int j=0;j<=str2.size();j++)DP[0][j]=0;

for(int i=1;i<=str1.size();i++){
    for(int j=1;j<=str2.size();j++){
        if(str1[i-1]==str2[j-1]){
            DP[i][j]=DP[i-1][j-1]+1;
        }
        else{
            DP[i][j]=max(DP[i][j-1],DP[i-1][j]);
        }
    }
}
int len=DP[str1.size()][str2.size()];
int i=str1.size();
int j=str2.size();
string s="";
for(int i=0;i<len;i++){
    s+='$';
}
int index=len-1;
while(i>0&&j>0){
    if(str1[i-1]==str2[j-1]){
        s[index]=str1[i-1];
        index--;
        i--;
        j--;
    }
    else{
        if(DP[i][j-1]>DP[i-1][j])j--;
        else i--;
    }
}
return s;
}
int main(){
string str1="ABCBDAB";
string str2="BDCABA";

vector<vector<int>>DP(str1.size()+1,vector<int>(str2.size()+1));
string temp=SubSequence(str1,str2,DP);
cout<<"Length:"<<DP[str1.size()][str2.size()]<<endl;
cout<<temp<<endl;

return 0;
}
