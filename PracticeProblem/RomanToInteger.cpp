#include<bits/stdc++.h>
using namespace std;
int num(char ch){
 if(ch=='I')return 1;
 else if(ch=='V')return 5;
 else if(ch=='X')return 10;
 else if(ch=='L')return 50;
 else if(ch=='C')return 100;
 else if(ch=='D')return 500;
 else if(ch=='M')return 1000;
}
int main(){
string str="MCMXCIV";

int index=0,sum=0;
while(index<str.size()-1){
    if(num(str[index])<num(str[index+1])){
        sum-=num(str[index]);
    }
    else
        sum+=num(str[index]);

    index++;
}
sum+=num(str[index]);
cout<<sum<<endl;


return 0;
}
