#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==12)cout<<"Case "<<i<<": invalidum"<<endl;
        else if(b+c==12)cout<<"Case "<<i<<": invalidum"<<endl;
        else if(a+c==12)cout<<"Case "<<i<<": invalidum"<<endl;
        else cout<<"Case "<<i<<": perfectus"<<endl;


 }
 return 0;
}
