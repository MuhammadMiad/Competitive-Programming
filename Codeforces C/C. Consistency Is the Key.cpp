#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
        int  a,b;
     cin>>a>>b;
   int l=0;
double   sum1=a;
  double   sum2=b;
   while(1){

        sum1+=0.5;
        sum2+=1;
      //  cout<<"sum1 ="<<sum1<<" "<<"sum2="<<sum2<<endl;
         l++;
        if(sum2>sum1){
            break;
        }

   }
   v.push_back(l);

}
for(int i=0;i<v.size();i++){
    cout<<"Case #"<<i+1<<":"<<v[i]<<endl;
}
return 0;
}
