#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i<n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;

}
int main()
{

    int n;
    cin>>n;
    int l=2;
    int r=n-1;
    while(l<=r)
    {
        if(l+r==n&&(prime(l)==0&&prime(r)==0))
        {
            cout<<l<<" "<<r<<endl;
            break;

        }
    else if(l+r==n&&prime(l)==true)l++;
    else if(l+r==n&&prime(r)==true)r--;
    else if(l+r>n)r--;
    else if(l+r<n) l++;
    }


    return 0;
}
