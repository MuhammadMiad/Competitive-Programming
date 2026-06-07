#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<char>>arr(3,vector<char>(3));
        vector<bool>st(3,0);
        int x,y;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='?')
                {
                    x=i;
                    y=j;
                }
            }
        if(y==0){
            for(int i=0;i<3;i++){
               if(arr[i][y]!='?')st[arr[i][y]-'A']=1;
            }
        }
        else if(y==1){
           for(int i=0;i<3;i++){
                if(arr[i][y]!='?')st[arr[i][y]-'A']=1;
            }
        }
        else if(y==2){
           for(int i=0;i<3;i++){
                if(arr[i][y]!='?')st[arr[i][y]-'A']=1;
            }
        }

        for(int i=0; i<3; i++)
        {
            if(st[i]==0)
            {
                char ch='A'+i;
                cout<<ch<<endl;
                break;
            }
        }


    }

    return 0;
}
