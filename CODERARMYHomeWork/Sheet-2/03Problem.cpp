#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,even=0,odd=0,negative=0,positive=0;
cin>>n;
for(int i=0;i<n;i++){
   cin>>x;
   if(x%2==0)even++;
   if(x%2!=0)odd++;
   if(x<0)negative++;
   if(x>0)positive++;

}
cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<positive<<endl<<"Negative: "<<negative<<endl;



return 0;
}
