#include<bits/stdc++.h>
using namespace std;
int Winner(vector<bool>&person,int n,int index,int personleft,int k){
if(personleft==1){
    for(int i=0;i<n;i++){
        if(person[i]==0)return i;
    }
}

int kill=(k-1)%personleft;
while(kill--){
    index =(index+1)%n;
    while(person[index]==1){
        index=(index+1)%n;
    }
}
person[index]=1;
while(person[index]==1){
    index=(index+1)%n;
}
return Winner(person,n,index,personleft-1,k);

}
int main(){
   int n,k;
   cin>>n>>k;
   vector<bool>person(n,0);
   cout<<Winner(person,n,0,n,k)<<endl;
return 0;
}
