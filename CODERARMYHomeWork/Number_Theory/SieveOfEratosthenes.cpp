#include<bits/stdc++.h>
using namespace std;
void sieveOfEratosthenes(vector<int>&sieve){
   for(int i=2;i*i<=1e5;i++){
    if(sieve[i]==0){
        for(int j=i*i;j<1e5;j+=i){
            sieve[j]=1;
        }
    }
   }

}
int main(){
    vector<int>sieve(1e5+1,0);

 sieveOfEratosthenes(sieve);
vector<int>v;
 for(int i=2;i<1e5;i++){
    if(sieve[i]==0)v.push_back(i);
 }

 cout<<"5 th Prime Number:"<<v[5-1]<<endl;

return 0;
}
