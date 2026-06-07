#include<bits/stdc++.h>
using namespace std;
int Winner(int index,int n,int personleave,int k,vector<bool>&person){
if(personleave==1){
    for(int i=0;i<n;i++){
        if(person[i]==0)return i;
    }
}
    ///find the position kill
    int kill=(k-1)%personleave;
    while(kill--){
        index=(index+1)%n;
        while(person[index]==1)///skip the kill person
            index=(index+1)%n;
    }
    person[index]=1;

    while(person[index]==1)
        index=(index+1)%n;

    return Winner(index,n,personleave-1,k,person);
}

int winner(int n,int k){
 if(n==1)return 0;
 return (winner(n-1,k)+k)%n;
}
int main(){
int n,k;
cin>>n>>k;
vector<bool>person(n,0);
int index=0;
int personleave=n;
//int ans=Winner(index,n,personleave,k,person);
int ans=winner(n,k);
cout<<ans+1<<endl;
return 0;
}
