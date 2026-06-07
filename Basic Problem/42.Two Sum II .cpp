#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {2,7,11,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    vector<int>v(2);
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int x=arr[start]+arr[end];
        if(x==target)
        {
            v[0]=start+1;
            v[1]=end+1;
            break;
        }
        else if(x>target)end--;
        else start++;
    }
    cout<<v[0]<<" "<<v[1]<<endl;

    return 0;
}
