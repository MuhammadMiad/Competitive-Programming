#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0)  return false;
    for(int i=3; i*i<n; i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    bool ans=prime(n);
    if(ans==true)cout<<"This is Prime"<<endl;
    else cout<<"This is Not Prime"<<endl;

    return 0;
}
