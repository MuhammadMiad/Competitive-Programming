#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        vector<vector<char>>arr(8,vector<char>(8));
        for(int i=0; i<8; i++)
            for(int j=0; j<8; j++)cin>>arr[i][j];
        int R;
        for(int i=0; i<8; i++)
        {
             R=0;
            for(int j=0; j<8; j++)
            {
                if(arr[i][j]=='R')R++;

            }
            if(R==8)break;
        }
        if(R==8)
        {
            cout<<"R"<<endl;
        }
        else cout<<"B"<<endl;
    }


}
