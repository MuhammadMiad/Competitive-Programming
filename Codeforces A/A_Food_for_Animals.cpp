#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v,v1;
while(n--){
    int k;
   for(int i=0;i<5;i++){
        cin>>k;
     v.push_back(k);
}
int sum,sum1;
   if(v[0]>=v[3] &&v[1]>=v[4]){
         v1.push_back(1);
   }
   else if(v[0]<v[3] ){
    if(v[1]>=v[4]){
        sum=v[0]+v[2];
        if(sum>=v[3]){
            v1.push_back(1);
        }
        else{
            v1.push_back(0);
        }
    }
    else{
            sum1=abs(v[3]-v[0])+abs(v[4]-v[1]);
//        sum=v[0]+v[2]/2;
//        sum1=v[1]+v[2]/2;

//        if(sum>=v[3]&&sum1>=v[4]){
//            v1.push_back(1);
//        }
   if(sum1<=v[2]){
    v1.push_back(1);
}
        else{
            v1.push_back(0);
        }

    }

   }


   else if(v[1]<v[4] ){
    if(v[0]>=v[3]){
        sum=v[1]+v[2];
        if(sum>=v[4]){
            v1.push_back(1);
        }
        else{
            v1.push_back(0);
        }
    }
    else{
        sum1=abs(v[3]-v[0])+abs(v[4]-v[1]);
//        sum=v[0]+v[2]/2;
//        sum1=v[1]+v[2]/2;

//        if(sum>=v[3]&&sum1>=v[4]){
//            v1.push_back(1);
//        }
    if(sum1<=v[2]){
       v1.push_back(1);
    }
    else{
            v1.push_back(0);
        }

    }

   }



 v.clear();

}

for(int i=0;i<v1.size();i++){
    if(v1[i]==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}
