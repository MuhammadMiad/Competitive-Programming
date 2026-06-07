#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,f=0;
cin>>n;
for(int i=1;i<=n;i++){
        if(i%2==0){
            f+=i;
        }
        else
            f+=(-i);


}
cout<<f<<endl;

return 0;
}
