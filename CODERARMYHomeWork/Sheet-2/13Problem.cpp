#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int c=0;
for(int i=a;i<=b;i++){
        int mul=1,ans=0;
        int aa=i;
    while(aa){
        int rem=aa%10;
        aa/=10;
        if(rem==4||rem==7){
            ans=mul*rem+ans;
             mul*=10;
        }


    }
    if(ans==i){
        cout<<i<<" ";
        c++;
    }


}
if(c==0)cout<<-1<<endl;
else cout<<endl;
return 0;
}
