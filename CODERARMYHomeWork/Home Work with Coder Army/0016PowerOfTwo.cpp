//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int co=0;
//    while(n>1){
//        int rem=n%2;
//        n/=2;
//        if(rem==1){
//            co++;
//        }
//    }
//    if(co==0)cout<<"Power of Two"<<endl;
//    else cout<<"Not Power of Two"<<endl;
//
//
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int co=0;
    while(n){
        if((n&1)!=0)co++;
        n=n>>1;
    }
    if(co==1)cout<<"Power of Two"<<endl;
    else cout<<"Not power of two"<<endl;

return 0;
}
