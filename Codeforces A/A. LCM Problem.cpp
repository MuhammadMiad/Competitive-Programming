#include<bits/stdc++.h>
using namespace std;
//int GCD(int a,int b){
//     if(b==0) return a;
//     return GCD(b,a%b);
//
//}
//void solve(int a, int b){
// int l=a;
//int r=b;
//int co=0;
//while(l<r){
//            int x=(l*r)/GCD(l,r);
//           if((a<=l&&l<r&&r<=b)&&(a<=x&&x<=b)){
//            cout<<l<<  " "<< r<<endl;
//            co=1;
//            break;
//         }
//          if(x>r)r--;
//          else l++;
//    }
//if(co==0){
//     cout<<"-1"<<  " "<<"-1"<<endl;
//}
//
//}
//
//int main(){
//int t;
//cin>>t;
//while(t--){
//    int a,b;
//    cin>>a>>b;
//   solve(a,b);
//}

int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a*2<=b){
        int x=a;
        int y=a*2;
        cout<<x<<" "<<y<<endl;
    }
    else cout<<"-1"<<" "<<"-1"<<endl;
}
return 0;
}
