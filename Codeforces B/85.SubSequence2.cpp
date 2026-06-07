#include<bits/stdc++.h>
using namespace std;
void Subsequence(string str,int index,int n,string &temp,vector<string>&ans)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    ///Not included
    Subsequence(str,index+1,n,temp,ans);
    ///included
    temp+=str[index];
    Subsequence(str,index+1,n,temp,ans);
    temp.pop_back();
}
int main()
{
    string str="abc";
    vector<string>ans;
    string temp;
    int  index=0;
    Subsequence(str,index,str.size(),temp,ans);
    for(int i=0; i<ans.size(); i++)
    {
    cout<<ans[i]<<endl;
    }


    return 0;
}

