/**
ei problem ta ami korte partam zodi vabte partam, mod korte hobe alice and bob er sum ke tahole.
**/
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long int ll;
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        vector<int>arr(n);
//        for(int i=0;i<n;i++)arr[i]=i;
//
//        int ali=0,bob=0;
//        while(1){
//            int co=0,flag=0,alice;
//        for(int i=0;i<n;i++){
//            if(arr[i]!=-1 and co==0){
//                alice=arr[i];
//                arr[i]=-1;
//                co=1;
//                ali++;
//            }
//            if(arr[i]!=-1){
//                int x=alice+arr[i];
//                if(x%4==3){
//                bob++;
//                arr[i]=-1;
//                flag=1;
//                break;
//                }
//
//            }
//        }
//        if(flag==0)break;
//
//        }
//
//        if(bob==ali)cout<<"Bob"<<endl;
//        else cout<<"Alice"<<endl;
//
//
//    }
//
//
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }

return 0;
}
