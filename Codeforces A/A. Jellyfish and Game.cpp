#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
      vector<int>jel(a);
      vector<int>gel(b);
      for(int i=0;i<a;i++)cin>>jel[i];
      for(int i=0;i<b;i++)cin>>gel[i];
      sort(jel.begin(),jel.end());
      sort(gel.begin(),gel.end());
      if(k%2==0){
        if(jel[0]<gel[a-1]) swap(jel[0],gel[a-1]);
         sort(jel.begin(),jel.end());
         sort(gel.begin(),gel.end());
         if(jel[b-1],gel[0])swap(jel[b-1],gel[0]);
      }
      else{
        if(jel[0]<gel[a-1]) swap(jel[0],gel[a-1]);
      }
      int sum=0;
      for(int i=0;i<a;i++){
        sum+=jel[i];
      }
    v.push_back(sum);
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}
