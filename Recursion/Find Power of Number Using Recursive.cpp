#include<bits/stdc++.h>
using namespace std;
int Power(int x,int a){

    if(a==0) return 1;
    int result= x*Power(x,a-1);
 //   cout<<"x="<<x<<"  a="<<a<< "   result="<<result<<endl;
    return   result;

}
int main(){
int x,n;
cin>>x>>n;
cout<<"Power of "<<x<<" to the power " <<n<<" :"<<Power(x,n)<<endl;

return 0;
}
