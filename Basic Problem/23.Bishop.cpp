#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    ///leftup side
    cnt+=min(a-1,b-1);
    ///rightup Side
    cnt+=min(a-1,8-b);
    ///leftdown side
    cnt+=min(8-a,b-1);
    ///rightdown side
    cnt+=min(8-a,8-b);

    cout<<"Total move On:"<<cnt<<endl;

return 0;
}
