/**n=5
step:1 or 2
 1+1+1+1+1
 1+1+1+2
 1+1+2+1
 1+2+1+1
 2+1+1+1
 2+1+2
 2+2+1
 1+2+2
**/
#include<bits/stdc++.h>
using namespace std;
int totalways(int n)
{
    if(n==1||n==2)return n;

    int a=1,b=2,c;
    for(int i=3; i<=n; i++)
    {
        c=a+b;
        a=b,b=c;
    }
    return c;

}
int main()
{
    int n;
    cin>>n;
    cout<<"Total ways:"<<totalways(n)<<endl;
    return 0;
}
