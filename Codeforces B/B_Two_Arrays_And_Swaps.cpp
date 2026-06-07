#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k,sum1=0,q,r,s=0;
cin>>t;
vector<int>v,v1,v2;
for(int i=0;i<t;i++){
        cin>>n>>k;
        for(int j=0;j<n;j++){
            cin>>q;
            v1.push_back(q);
            s+=q;
        }
        for(int j=0;j<n;j++){
            cin>>r;
            v2.push_back(r);
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());
         int c=0;
       for(int j=0;j<n;j++){

             if(v1[j]<v2[j]){
                swap(v1[j],v2[j]);
                c++;
                if(c==k){
                    break;
                }

             }
                    }

        for(int i=0;i<v1.size();i++){
            sum1+=v1[i];
       }

       if(k==0){
        v.push_back(s);
       }
       else{
         v.push_back(sum1);
       }

        v1.clear();
        v2.clear();
         sum1=0;
         s=0;


}



for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
