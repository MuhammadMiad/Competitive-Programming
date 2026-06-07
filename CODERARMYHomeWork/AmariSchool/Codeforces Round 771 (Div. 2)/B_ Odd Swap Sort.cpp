#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(is_sorted(begin(arr),end(arr)))
        {
            cout<<"Yes"<<endl;
            continue;
        }

//    while(1){
//            int flag=0;
//       for(int i=1;i<n;i++){
//       if(arr[i-1]>arr[i] and (arr[i]+arr[i-1])%2==1){
//          flag=1;
//         swap(arr[i-1],arr[i]);
//       }
//    }
//    if(!flag)break;
//    }
//
//    if(is_sorted(begin(arr),end(arr))){
//        cout<<"Yes"<<endl;
//        continue;
//    }
//        else cout<<"No"<<endl;
//

        vector<int>ans1;
        vector<int>ans2;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2)ans1.push_back(arr[i]);
            else ans2.push_back(arr[i]);
        }
        if(is_sorted(begin(ans1),end(ans1)) and  is_sorted(begin(ans2),end(ans2)))
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

    return 0;
}
