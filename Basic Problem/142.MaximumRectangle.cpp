#include<bits/stdc++.h>
using namespace std;
int LargestRectanglearea(vector<int>&arr,int n)
{
    stack<int>st;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        while(!st.empty()&&arr[st.top()]>arr[i])
        {
            int index=st.top();
            st.pop();
            if(!st.empty())
            {
                ans=max(ans,arr[index]*(i-st.top()-1));
            }
            else
            {
                ans=max(ans,arr[index]*i);
            }
        }
        st.push(i);
    }
    while(!st.empty())
    {
        int index=st.top();
        st.pop();
        if(!st.empty())
        {
            ans=max(ans,arr[index]*(n-st.top()-1));
        }
        else
        {
            ans=max(ans,arr[index]*n);
        }
    }

    return ans;
}
int main()
{
    int arr[4][5]= {1,0,1,0,0,
                    1,0,1,1,1,
                    1,1,1,1,1,
                    1,0,0,1,0
                   };
    int n=4,m=5;
    int ans=0;
    vector<int>height(m,0);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==0)height[j]=0;
            else
                height[j]++;
        }
        ans=max(ans,LargestRectanglearea(height,m));
    }
    cout<<"LargestRectangle: "<<ans<<endl;
    return 0;
}

