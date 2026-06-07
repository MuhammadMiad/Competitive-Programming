#include<bits/stdc++.h>
using namespace std;
void fun(char *str1,char *str2)
{
   while(*str1=*str2){
    str1++,str2++;
   }
}
int main()
{
   char first[]="Miadul";
   char second[]="Shafiq";
   fun(first,second);
   cout<<first<<endl;
    return 0;
}
