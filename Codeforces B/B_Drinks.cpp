#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,k,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        sum+=k;
    }
    cout<<sum/n<<endl;


    return 0;
}
