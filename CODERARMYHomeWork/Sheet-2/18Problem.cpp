#include<bits/stdc++.h>
using namespace std;
int main(){
while(1){
    int m,n;
    cin>>m>>n;
    if(m==0||m<0||n==0||n<0)break;
    else if(m>n){
            int sum=0;
        for(int i=n;i<=m;i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }
    else{
        int sum=0;
        for(int i=m;i<=n;i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }
}

return 0;
}
