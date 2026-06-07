#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Add_Edge(ll node,vector<ll>&arr){
 ll mn=INT_MAX;
  for(int i=0;i<arr.size();i++){
    mn=min(mn,abs(node-arr[i]));
  }
  return mn;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        if(n==1){
            cout<<abs(a[0]-b[0])<<endl;
            continue;
        }

        ll ans1=abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
        ll ans2=abs(a[n-1]-b[0])+abs(a[0]-b[n-1]);

        ll ans3=abs(a[0]-b[0])+Add_Edge(a[n-1],b)+Add_Edge(b[n-1],a);
        ll ans4=abs(a[n-1]-b[n-1])+Add_Edge(a[0],b)+Add_Edge(b[0],a);
        ll ans5=abs(a[0]-b[n-1])+Add_Edge(b[0],a)+Add_Edge(a[n-1],b);
        ll ans6=abs(a[n-1]-b[0])+Add_Edge(a[0],b)+Add_Edge(b[n-1],a);

        ll ans7=Add_Edge(a[0],b)+Add_Edge(b[0],a)+Add_Edge(a[n-1],b)+Add_Edge(b[n-1],a);

        ll ans=min({ans1,ans2,ans3,ans4,ans5,ans6,ans7});


        cout<<ans<<endl;
    }

return 0;
}
