#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int mul=n*k;
        int even=0,odd=0;
        vector<int>a1,a2;
        for(int i=1;i<=mul;i++){
            if(i%2){
                odd++;
                a1.push_back(i);
            }
            else {
                even++;
                a2.push_back(i);
            }
        }

        int sum=(odd/k)+(even/k);
        if(sum!=n)cout<<"NO"<<endl;
        else{
            for(int i=0;i<a2.size();i++){
                a1.push_back(a2[i]);
            }
            cout<<"YES"<<endl;
            int index=1;
            for(int i=0;i<a1.size();i++){
                cout<<a1[i]<<" ";
                if(index==k){
                cout<<endl;
                index=1;
                }
                else index++;
            }

        }
    }



return 0;
}
