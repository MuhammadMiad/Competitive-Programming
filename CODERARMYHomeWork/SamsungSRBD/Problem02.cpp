
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
        string str;
        cin>>str;
        int one=0,zero=0;
        int total=count(begin(str),end(str),'0');
        if(total==n){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(i%2 and str[i]=='0')zero++;
            else if(i%2==0 and str[i]=='1')one++;
        }
        cout<<max(one,zero)<<endl;
    }


    return 0;
}
