#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int >v,v1;
    while(t--){
        int n,k;
        cin>>n;
        int sum=0;
        int co=0;
        for(int i=0;i<n;i++){
                cin>>k;
            v.push_back(k);
            sum+=k;
           if(k%2==0)
            co++;
        }
        if(sum%2!=0){
            v1.push_back(0);
        }
        else if(sum%2==0&&n%2==0){
            v1.push_back(1);
        }
        else if(n%2!=0&&co==n)
            v1.push_back(0 );
        else
            v1.push_back(1);

            v.clear();
    }

     for(int i=0;i<v1.size();i++){
        if(v1[i]==1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
     }



return 0;
}
