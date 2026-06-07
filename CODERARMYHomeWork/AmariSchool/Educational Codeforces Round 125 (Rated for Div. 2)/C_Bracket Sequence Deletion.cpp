#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int op=0,rem=0;
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]==')' and str[i+1]=='(')
            {  int j;
              for( j=i+1;j<str.size();j++){
                if(str[j]==')'){
                    op++;
                    rem+=j-i+1;
                    i=j;
                    break;
                }
              }
              if(i!=j)i=j;

            }
            else if(str[i]==')' and str[i+1]==')')
            {
                op++;
                rem+=2;
                i++;
            }
            else if(str[i]=='(' and str[i+1]==')')
            {
                op++;
                rem+=2;
                i++;
            }
            else if(str[i]=='(' and str[i+1]=='(')
            {
                op++;
                rem+=2;
                i++;
            }

        }

        cout<<op<<" "<<n-rem<<endl;
    }


    return 0;
}
