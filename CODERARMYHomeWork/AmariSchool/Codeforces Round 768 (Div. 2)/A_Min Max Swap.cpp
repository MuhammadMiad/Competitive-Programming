#include<bits/stdc++.h>
using namespace std;
#define in_range(i,x,y) for(int i=x;i<=y;i++)
#define in_range_back(i,x,y) for(int i=y;i>=x;i--)
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        for(int i=0;i<n;i++){
            if(a[i]<b[i])swap(a[i],b[i]);
        }
        int mx_index1=max_element(begin(a),end(a))-begin(a);
        int mx_index2=max_element(begin(b),end(b))-begin(b);
        cout<<a[mx_index1]*b[mx_index2]<<endl;
    }


return 0;
}
