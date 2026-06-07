#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mn=INT_MAX;
    int s;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(mn>x){
            mn=x;
            s=i;
        }
    }
    cout<<mn<<" "<<s<<endl;

return 0;
}
