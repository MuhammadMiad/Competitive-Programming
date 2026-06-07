#include<bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int n,int source,int help,int des){
if(n==1){
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<des<<endl;
    return;
}
TowerOfHanoi(n-1,source,des,help);
cout<<"Move disk "<<n<<" from "<<source<<" to "<<des<<endl;
TowerOfHanoi(n-1,help,source,des);
}
int main(){
int n;
cin>>n;

TowerOfHanoi(n,1,2,3);
cout<<pow(2,n)-1<<endl;
return 0;
}
