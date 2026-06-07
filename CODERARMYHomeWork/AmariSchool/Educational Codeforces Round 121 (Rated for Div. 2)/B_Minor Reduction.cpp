#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int index=-1;
        int sum;
        for(int i=str.size()-1; i>=1;i--){
            int x=str[i-1]-'0';
            int y=str[i]-'0';
            sum=x+y;
            if(sum>9){
              index=i;
              break;
            }
        }
        if(index!=-1){
            for(int i=0;i<index-1;i++){
                cout<<str[i];
            }
            cout<<sum;
            for(int i=index+1;i<str.size();i++){
                cout<<str[i];
            }
            cout<<endl;
        }
        else{
           int x=str[0]-'0';
            int y=str[1]-'0';
            sum=x+y;
            cout<<sum;
            for(int i=2;i<str.size();i++)cout<<str[i];
            cout<<endl;
        }
    }
    return 0;
}
