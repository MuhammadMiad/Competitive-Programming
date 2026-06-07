#include<bits/stdc++.h>
using namespace std;
string IntToRoman(int num){
 int n[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
 string s[]={"M","CM","D","CD","C","XC","L","CL","X","IX","V","IV","I"};

 int index=0;
 string ans;
 while(num){
    if(num>=n[index]){
        ans+=s[index];
        num-=n[index];
    }
    else index++;
 }
return ans;

}
int main(){
int num;
cin>>num;
cout<<"Roman Number of "<<num<<" = "<<IntToRoman(num)<<endl;
return 0;
}
