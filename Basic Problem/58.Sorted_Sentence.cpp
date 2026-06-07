#include<bits/stdc++.h>
using namespace std;
string sortSentence(string s)
{
    vector<string>ans(10);
    string temp;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;
        }
        else
        {
            temp+=s[i];
        }
    }
    int pos=temp[temp.size()-1]-'0';
    temp.pop_back();
    ans[pos]=temp;
    temp.clear();
    count++;

    for(int i=1; i<=count; i++)
    {
        temp+=ans[i];
        temp+=" ";
    }
    temp.pop_back();

    return temp;
}
int main()
{
    string str="is2 sentence4 This1 a3";
    string ans=sortSentence(str);
    cout<<"Sorting the Sentence:   "<<ans<<endl;
    return 0;
}

