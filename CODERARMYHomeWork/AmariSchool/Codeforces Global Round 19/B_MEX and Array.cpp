//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        vector<int>arr(n);
//        for(int i=0;i<n;i++)cin>>arr[i];
//            int x=0,y=1;
//            int p,q,sum=0;
//        while(1){
//
//             p=x;
//             q=y;
//             while(1){
//                vector<int>v;
//                for(int i=p;i<q;i++){
//                v.push_back(arr[i]);
//            }
//            int cnt=0;
//            for(int i=0;i<v.size();i++){
//              if(v[i]==0)cnt++;
//            }
//            sum+=cnt+v.size();
//            v.clear();
//            if(q==n)break;
//            p++,q++;
//
//            }
//            if(y==n)break;
//            x=0,y++;
//
//        }
//        cout<<sum<<endl;
//
//    }
//
//return 0;
//}
///------------------------------------Second Method--------------------------------------------

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
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int add=j-i+1;
                for(int k=i;k<=j;k++){
                    if(arr[k]==0)add++;
                }
              ans+=add;
            }
        }
        cout<<ans<<endl;
    }

return 0;
}
