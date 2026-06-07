#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int s=1;
    for(int i=0;i<n;i++){
            s*=2;
         arr[i]=s;
    }
    int sum=0,sum1=0,j=0,k=n-1;

      for(int i=1;i<=n;i++){
            if(i%2==1){
                sum+=arr[j];
                j++;
            }
            else{
                sum1+=arr[k];
                k--;
            }

    }
      if(sum<sum1){
        v.push_back(sum);
      }
      else{
        v.push_back(sum1);
      }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
