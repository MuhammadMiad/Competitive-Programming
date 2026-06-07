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
        vector<int>arr(20);
        for(int i=0; i<20; i++)arr[i];
        vector<vector<int>>ans;
        vector<int>temp;
        for(int k=0;k<n;k++)
        {   int time;
            cin>>time;
            temp.push_back(time);
            vector<int>aa;
            for(int i=0;i<20;i++)
            {
                int x;
                cin>>x;
                aa.push_back(x);
            }
            ans.push_back(aa);
            aa.clear();
        }
//        vector<int>tt;
//        int c=5;
//        int x=0;
//        int y=0;
//        long long sss=0;
//        while(c--)
//        {
//            int mn=INT_MAX;
//            int ti;
//            for(int i=0; i<n; i++)
//            {
//                int sum=0;
//                for(int j=x; j<x+4; j++)
//                {
//                    sum+=ans[i][arr[j]-1];
//                }
//                x=y;
//                if(mn>sum)
//                {
//                    mn=sum;
//                    ti=temp[i];
//                }
//            }
//            tt.push_back(ti);
//            x+=4;
//            y+=4;
//            sss+=mn;
//
//        }
//        int mx=0;
//        for(int i=0; i<tt.size(); i++)mx=max(mx,tt[i]);
//        sss+=mx;
//
//        cout<<sss<<endl;
    }

    return 0;
}
