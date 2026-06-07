#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            v.push_back(0);
        }
        else if(a<b){
             int ans=b-a;
                int result=ans/10;
                if(ans%10!=0){
                   v.push_back(result+1);
                }
                else if(ans%10==0){
                    v.push_back(result);
                }

        }
        else if(a>b){
            int ans=a-b;
                int result=ans/10;
                if(ans%10!=0){
                   v.push_back(result+1);
                }
                else if(ans%10==0){
                    v.push_back(result);
                }

        }

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

return 0;
}
