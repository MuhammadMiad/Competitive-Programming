#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        double  k;
        cin>>k;
        if(ceil(k/3)+round(k/3)*2==k){
                int p=ceil(k/3);
                int q=round(k/3);
               cout<<p<< " "<<q<<endl;
        }
        else if(ceil(k/3)+round(k/3)*2!=k){
                 int p=floor(k/3);
               int q=round(k/3);
               cout<<p<< " "<<q<<endl;
        }

    }

return 0;
}
