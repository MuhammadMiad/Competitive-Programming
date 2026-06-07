#include<bits/stdc++.h>
using namespace std;
float f(float x) {
   return  3*x-cos(x)-1;
};
int main(){
    float a,b,fa,fb,c,fc;
    int i=0;
     cout<<"Enter the real value for constant 'a'and 'b':";
     cin>>a>>b;

     fa=f(a);
     fb=f(b);
     if(fa*fb>0){
        cout<<"a and b are not suitable"<<endl;
        exit(0);
     }

     cout<<"Iteration     a     b     fa     fb     c     fc "<<endl;
     while(1){
        float store;
        cout<<fixed<<setprecision(4)<<endl;
        c=(a*f(b)-b*f(a))/(f(b)-f(a));

        fc=f(c);
        i++;
        //cout<<fixed<<setprecision(4)<<endl;
        cout<<i<<"    "<<a<<"    "<<b<<"    "<<fa<<"    "<<fb<<"    "<<c<<"    "<<fc<<endl;
        if(fa*fc<0)b=c;
        else a=c;
        if(c==store)break;
        store=c;
     }
     cout<<"The root is:"<<c<<endl;


return 0;
}
