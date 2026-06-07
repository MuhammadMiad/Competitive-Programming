#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    if(a==b&&b==c)cout<<"1"<<" "<<"1"<<" "<<"1"<<endl;
   else if(a>b&&a>c){
        x=(a-b)+1;
        y=(a-c)+1;
       cout<<"0"<<" "<<x<<" "<<y<<endl;
    }
    else if(b>a&&b>c){
        x=(b-a)+1;
        y=(b-c)+1;
        cout<<x<<" "<<"0"<<" "<<y<<endl;
    }
    else if(c>a&&c>b){
        x=(c-a)+1;
        y=(c-b)+1;
        cout<<x<<" "<<y<<" "<<"0"<<endl;
    }
    else if((a==b&&c<a)||(b==c&&a<b)||(a==c&&b<a)){
        if(a==b)cout<<"1"<<" "<<"1"<<" "<<(a-c)+1<<endl;
        else if(b==c) cout<<(b-a)+1<<" "<<"1"<<" "<<"1"<<endl;
        else if(a==c) cout<<"1"<<" "<<(a-b)+1<<" "<<"1"<<endl;
    }
}

return 0;
}
