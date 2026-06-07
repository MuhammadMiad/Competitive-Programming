#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
     int m=n;
     int co=0;
    while(m>0){
        m/=10;
        co++;
    }
    int x=0;
    for(int i=0;i<co-1;i++){
        x=x*10+5;
    }
    int q=n-x;
       int c=0,s=0;
    while(q>0){
            int rem=q;
            rem%=10;
            if(5<=rem&&rem<=9){
                s++;
            }
        q/=10;
        c++;

    }
    if(c==s){
        v.push_back(1);
    }
    else{
        v.push_back(0);
    }

}
for(int i=0;i<v.size();i++){
    if(v[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;
}
