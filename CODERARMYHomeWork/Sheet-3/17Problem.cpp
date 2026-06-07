#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int cnt=0;
        int j=0,k=1;
        while(1){
           int a=j,b=k;
            while(1){
                vector<int>s;
            for(int i=a;i<b;i++){
               s.push_back(v[i]);
            }
            if(b==n+1)break;
            else {
            if(is_sorted(begin(s),end(s)))cnt++;
             a++,b++;
            s.clear();
           }
           }
           if(k==n)break;
           k++;
        }
        cout<<cnt<<endl;
    }

return 0;
}
