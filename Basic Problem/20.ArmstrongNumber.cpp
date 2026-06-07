#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}
bool  Armstrong(int n,int cnt)
{
    int num=n;
    int ans=0;
    while(n)
    {
        int rem=n%10;
        n/=10;
        ans+=pow(rem,cnt);
    }
    if(num==ans)return true;
    else return false;
}

int main()
{
    int num;
    cout<<"Enter Number:"<<endl;
    cin>>num;
    int digitNumber=digit(num);
    bool ans=Armstrong(num,digitNumber);
    if(ans)cout<<"Armstrong Number."<<endl;
    else cout<<"Not Armstrong number."<<endl;

    return 0;
}
