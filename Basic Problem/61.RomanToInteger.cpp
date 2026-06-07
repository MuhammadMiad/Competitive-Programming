#include<bits/stdc++.h>
using  namespace std;
 int Num(char ch){
   if(ch=='I')return 1;
   else if(ch=='V')return 5;
   else if(ch=='X')return 10;
   else if(ch=='L')return 50;
   else if(ch=='C')return 100;
   else if(ch=='D')return 500;
   else return 1000;
   }
int main(){
string str= "MMMMMCCCXXV";
int index=0,sum=0;
while(index<str.size()-1){
    if(Num(str[index])<Num(str[index+1]))
    sum-=Num(str[index]);
    else
        sum+=Num(str[index]);
    index++;
}
sum+=Num(str[index]);

cout<<"Integer of "<<str<<":"<<sum<<endl;


return 0;
}
