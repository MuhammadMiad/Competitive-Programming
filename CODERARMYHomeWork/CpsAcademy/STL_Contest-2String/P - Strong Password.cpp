#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int digit=0,small=0,capital=0,special=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='0' and str[i]<='9')digit=1;
        else if(str[i]>='a' and str[i]<='z')small=1;
        else if(str[i]>='A' and str[i]<='Z')capital=1;
        else if( str[i]=='!'||str[i]=='@'||str[i]=='#'|| str[i]=='$'||str[i]=='%'||str[i]=='^'||str[i]=='$'||str[i]=='*'||str[i]==')'||str[i]=='('||str[i]=='-'||str[i]=='+')special=1;

    }
    int total=digit+small+capital+special;
    int rem=4-total;
    if(n>=6)cout<<rem<<endl;
    else
    {   if(n+rem<6)
        cout<<(6-(n+rem))+rem<<endl;
        else cout<<rem<<endl;
    }

    return 0;
}
