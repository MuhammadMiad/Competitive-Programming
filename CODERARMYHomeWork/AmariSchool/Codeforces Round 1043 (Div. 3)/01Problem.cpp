#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string aa;
        cin>>n>>aa;

        int m;
        string bb,cc;
        cin>>m>>bb>>cc;

        int k=0;
          for(int i=0;i<m;i++){
            if(cc[i]=='V'){
                string ans;
                ans+=bb[k];
                ans+=aa;
                aa=ans;

            }
            else{
                aa+=bb[k];

            }
            k++;
        }

        cout<<aa<<endl;
    }


return 0;
}
