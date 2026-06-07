#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
  cin>>t;
  vector<int>v,v1;
  while(t--){
    int  n;
    cin>>n;
    int  co=0,c=0;
    int sum1,sum2,ans=0,ans1=0;
    for(int i=2;i<=n;i+=2){
         co++;
         if(co<n/2){
               sum1=i;
               ans+=i;
         v.push_back(sum1);
         }

        else if(co==n/2){
            sum1=i;
            ans+=i;
            v.push_back(sum1);
            break;
         }
    }

      for(int i=1; i<n*2;i+=2){
          c++;
            if(c<n/2){
                sum2=i;
                ans1+=i;
                v1.push_back(sum2);
            }
         else if(c>=n/2){
                  ans1+=i;
                 if(ans1==ans){
                        sum2=i;
                        v1.push_back(sum2);
                      break;
                 }
                 else  ans1-=i;

         }
    }
    if(ans1==ans){
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<  " ";
        }
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    v.clear();
    v1.clear();
  }

    return 0;
}
