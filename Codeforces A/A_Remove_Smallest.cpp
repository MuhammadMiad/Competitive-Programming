#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int >v,v1;
while(n--){
        int k,p;
    cin>>k;
  for(int i=0;i<k;i++){
    cin>>p;
    v.push_back(p);
  }

  sort(v.begin(),v.end());
   int c=0;
  for(int i=1;i<v.size();i++){
      if((v[i]-v[i-1]) >1){
            c++;
        v1.push_back(0);
        break;
    }
     }
     if(c==0){
        v1.push_back(1);
     }

     v.clear();

  }

  for(int i=0;i<v1.size();i++)
  {
      if(v1[i]==1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
  }

return 0;
}
