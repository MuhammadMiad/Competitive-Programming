#include<bits/stdc++.h>
using namespace std;
void root(int n)
{
    if(n==0||n==1)cout<<"Answer is:"<<n<<endl;
    int start=1;
    int End=n;
    int ans;
    int co=0;
    while(start<=End)
    {
        int mid=start+(End-start)/2;
        if(mid>n/mid)End=mid-1;
        else if(mid<n/mid)
        {
            start=mid+1;
            ans=mid;
        }
        else
        {
            cout<<"Answer is:"<<mid<<endl;
            co++;
            break;
        }
        }
    if(co==0)cout<<"Answer is:"<<ans<<endl;

}
int main()
{
    int n;
    cin>>n;
    root(n);

    return 0;
}
