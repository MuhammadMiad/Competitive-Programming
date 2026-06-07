#include<bits/stdc++.h>
using namespace std;
void Tower(int n,char s,char h,char d){
   if(n==1){
    cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    return;
   }
   else{
    Tower(n-1,s,d,h);
   cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    Tower(n-1,h,s,d);
   }

}

int main(){
int n;
cin>>n;
Tower(n,'1','2','3');
    return 0;
}
