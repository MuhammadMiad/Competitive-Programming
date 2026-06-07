#include<bits/stdc++.h>
using namespace std;
void Print(int n){
if(n==0) return ;
 Print(n-1);
cout<<n<<" ";

}
int main(){
int x;
cin>>x;
Print(x);


return 0;
}
