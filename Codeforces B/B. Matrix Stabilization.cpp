#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>> m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int s=0;
         for(int i=0;i<n;i++){
            int mx=0,sm=0;
            for(int j=0;j<m;j++){

                    if(arr[i][j]>mx){
                        mx=arr[i][j];
                        s=j;
                    }

            }

            for(int k=0;k<m;k++){
                 if(mx>arr[i][k]){
                     sm=arr[i][k];

                 }
            }
            while(mx!=sm){
                mx--;
            }
            arr[i][s]=mx;

        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }


return 0;
}
