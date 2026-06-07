#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int nums[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string str[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string ans;
    int index=0;
    while(a>0){
     if(a>=nums[index]){
        ans+=str[index];
        a-=nums[index];
     }
     else index++;
    }
    cout<<ans<<endl;

return 0;
}
