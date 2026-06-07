#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n,k,x;
    cin>>n>>k>>x;

        int cnt=0;
        int flag=0;
        vector<int>v;
        for(int i=k;i>=1;i--){
            if(i!=x){
                    int c=0;
                while(1){


                    if(cnt<n){
                      cnt+=i;
                    v.push_back(i);
                    c++;
                    }
                    if(cnt==n){
                        flag=1;
                        break;
                    }
                    if(cnt>n and c>1){
                     cnt-=i;
                     v.pop_back();
                     break;
                    }
                    if(cnt>n and c==1){
                        cnt-=i;
                        v.pop_back();
                        if(x!=i+1){
                            cnt-=i+1;
                        v.pop_back();
                        }
                        else {
                            cnt-=i+2;
                            v.pop_back();
                        }

                    }
                }
            }
            if(flag)break;
        }
        if(flag){
        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
        for(auto it:v)cout<<it<<" ";
        cout<<endl;
        }
        else cout<<"NO"<<endl;
    }

return 0;
}
