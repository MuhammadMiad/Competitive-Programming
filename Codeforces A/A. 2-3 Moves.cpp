#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,x;
    cin>>n;
    if(n==1||n==4)v.push_back(2);
    else if(n==2||n==3)v.push_back(1);

    else if(n>4&&n%3!=0){

       if(n%3==2){
            x=n/3+1;
        v.push_back(x);
       }
       else if(n%3==1){
        x=n/3+1;
        v.push_back(x);
       }

    }
    else if(n>4&&n%3==0){

        v.push_back(n/3);
    }
}
for(int it:v)cout<<it<<endl;
return 0;
}
