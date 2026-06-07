#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>arr(n);
        ll cnt=0,zero=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)zero=1;
            if(arr[i]<0)cnt++;
        }
        if(n==1){
            if(arr[0]<=0)cout<<0<<" "<<1<<endl;
            continue;
        }
        if(cnt%2==0 and !zero){
            cout<<0<<" "<<0<<endl;
            continue;
        }

        ll mx=0,leftin,rightin;
        vector<pair<int,int>>temp;
        for(int k=0;k<n;k++){
            if(arr[k]!=0){
                temp.push_back({k,arr[k]});
                if(k!=n-1)continue;
            }
            if(!temp.size())continue;
            if(temp.size()==1){
                if(mx<temp[0].second){
                    mx=temp[0].second;
                    leftin=temp[0].first-0;
                    rightin=n-1-temp[0].first;
                }
                else if(temp[0].second<=0){
                    if(mx==0){
                       leftin=temp[0].first-0+1;
                       rightin=n-1-temp[0].first;
                    }
                }
            }
         //for(int i=0;i<temp.size();i++)cout<<temp[i].first<<" "<<temp[i].second<<" ";
        // cout<<endl;
            ll neg=0;
         for(int i=0;i<temp.size();i++){
            if(temp[i].second<0)neg++;
         }

         if(neg%2){
         int leftind,rightind;
         ll leftmx=0,rightmx=0;
         ll sum=1;
         for(int i=0;i<temp.size();i++){
          sum*=temp[i].second;
          if(leftmx<sum){
            leftind=temp[i].first;
            leftmx=sum;
          }
        }
        sum=1;
        for(int i=temp.size()-1;i>=0;i--){
          sum*=temp[i].second;
          if(rightmx<sum){
            rightind=temp[i].first;
            rightmx=sum;
          }
        }
            if(leftmx>rightmx){

              if(mx<leftmx){
                mx=leftmx;
                leftin=temp[0].first-0;
                rightin=n-1-leftind;
              }

            }
            else if(leftmx<rightmx){
                if(mx<rightmx){
                mx=rightmx;
                leftin=rightind-0;
                rightin=n-1-temp[temp.size()-1].first;
                }

            }
            else if(leftmx==0 and rightmx==0) {
                if(mx<leftmx){
                mx=leftmx;
                leftin=0;
                rightin=n-1;
                }

            }
            else{
               if(mx<leftmx){
                mx=leftmx;
               leftin=temp[0].first-0;
               rightin=n-1-leftind;
               }

            }
         }
         else{
            ll mul=1;
            for(int i=0;i<temp.size();i++){
                mul*=temp[i].second;
            }

            if(mx<mul){
                mx=mul;
                leftin=temp[0].first-0;
                rightin=n-1-temp[temp.size()-1].first;
            }

           // cout<<mx<<" "<<mul<<" "<<leftin<<" "<<rightin<<endl;
         }

        temp.clear();
        }

        cout<<leftin<<" "<<rightin<<endl;



    }



return 0;
}


