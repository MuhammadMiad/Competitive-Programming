#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    if(n==2)cout<<"Yes"<<endl;
    else{
        set<int>st;
        for(int i=0;i<n;i++)st.insert(arr[i]);
        if(st.size()<2)cout<<"Yes"<<endl;
        if(st.size()>2)cout<<"No"<<endl;
        else if(st.size()==2){
            int x,y,c1=0,c2=0;
            x=arr[0];
            for(int i=0;i<n;i++){

                if(x!=arr[i]){
                    y=arr[i];
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(x==arr[i])c1++;
                else if(y==arr[i])c2++;
            }
            int s=abs(c1-c2);
            if(s<2)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }


  }

return 0;
}
