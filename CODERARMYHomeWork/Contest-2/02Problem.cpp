#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int x=0,y=n-1;
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(x==j and y!=j)cout<<'\\';
        else if(y==j and x!=j)cout<<'/';
        else if(x==y and x==j)cout<<'X';
        else cout<<"*";
    }
    x++;
    y--;
    cout<<endl;
 }

return 0;
}
