#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
int pre[N][N];
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>arr[i][j];
        pre[i][j]=arr[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
    }
}               /********Before ,Time Complexity was O(n^2)+O(n^2*Q)*******/
                /*******Now,Time complexity is O(n^2)+o(Q)*******/
int q;
cin>>q;
while(q--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long sum=0;
//    for(int i=a;i<=c;i++){
//        for(int j=b;j<=d;j++){
//            sum+=arr[i][j];
//        }
//    }
    cout<<pre[c][d]-pre[a-1][d]-pre[c][b-1]+pre[a-1][b-1]<<endl;
}


return 0;
}
