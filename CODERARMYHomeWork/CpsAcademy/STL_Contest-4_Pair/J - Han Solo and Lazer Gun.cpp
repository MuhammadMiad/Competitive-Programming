#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,x1,y2;
    cin>>n>>x1>>y2;
    set<double>p;
    int l=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x1!=x)
        p.insert((y2-y)/(x1-x));
        else l=1;
    }
    cout<<p.size()+l<<endl;

return 0;
}
