#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(2);

    //arr.clear();
    //erage(arr.begin()+1,arr.end()-1);
    //cout<<arr.front()<<endl;
    //arr.pop_back();
   // cout<<arr.back()<<endl;
   // arr.insert(begin(arr)+1,5,10);

    int a=count(arr.begin(),arr.end(),10);
    cout<<a<<endl;
   // sort(begin(arr),end(arr),greater<int>());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    auto it=find(begin(arr),end(arr),9)-begin(arr);
        cout<<it<<endl;

    int ar[]={4,5,9,11};
    cout<<max_element(ar,ar+4)-ar;

return 0;
}
