#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
           //arr[i]^=2;
        }
//        for(auto it:arr)cout<<it<<" ";
//        cout<<endl;
//        for(int i=0;i<n-1;i++){
//                arr[i+1]=arr[i+1]^arr[i];
//            }
//            cout<<arr[n-1]<<endl;


        int index=0,flag=0;
        int maxvalue=256;
        while(index<maxvalue){
            vector<int>temp(n);
            for(int i=0;i<n;i++){
              temp[i]=arr[i]^index;
            }
            for(int i=0;i<n-1;i++){
                temp[i+1]=temp[i]^temp[i+1];
            }
            if(temp[n-1]==0){
                flag=1;
                break;
            }
            temp.clear();
            index++;
        }
        if(flag)cout<<index<<endl;
        else cout<<-1<<endl;


    }


return 0;
}
