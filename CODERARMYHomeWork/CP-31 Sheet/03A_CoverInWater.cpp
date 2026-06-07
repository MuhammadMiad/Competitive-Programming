#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt=0,c=0;
    int x=0,y=0;
    for(int i=0;i<str.size();i++){

        if(str[i]=='.')c++;
        else if(str[i]=='#'){
             if(c<=2){
                    cnt+=c;
                    x=1;
             }
             else if(c>2){
                    cnt+=2;
                    y=1;
             }
             c=0;
        }
    }
    if(c>0){
        if(c<=2){
            cnt+=c;
            x=1;
        }

        else{
            cnt+=2;
            y=1;
        }

    }
    if(x==1 and y==1)cout<<2<<endl;
    else cout<<cnt<<endl;
}


return 0;
}
