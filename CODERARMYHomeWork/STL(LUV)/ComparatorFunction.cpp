#include<bits/stdc++.h>
using namespace std;
//bool should_i_swap(int a,int b)
//{
//    if(a>b)return true;
//    else return false;
//}

bool should_i_swap(pair<int,int>a,pair<int,int>b){
 if(a.first!=b.first){
  if(a<b)return true;
  return false;
 }
 else {
    if(a.second<b.second)return true;
    return false;
 }

}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0; i<n; i++)cin>>a[i].first>>a[i].second;

     sort(begin(a),end(a));
//    for(int i=0; i<n; i++)
//    {
//        for(int j=i+1; j<n; j++)
//        {
//            if(should_i_swap(a[i],a[j]))swap(a[i],a[j]);
//        }
//    }
    cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;

    return 0;
}
