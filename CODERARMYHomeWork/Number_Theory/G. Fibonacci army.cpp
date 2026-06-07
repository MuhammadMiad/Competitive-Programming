#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int  power,a=0,b=1;
    cin>>power;
    for(int i=1;i<=power;i++){
        int temp=a+b;
        a=b;
        b=temp;
    }
    cout<<b<<endl;

    return 0;
}
