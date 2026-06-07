#include<bits/stdc++.h>
using namespace std;
int main(){
    int L,N,M;
    cin>>L>>N>>M;
    int ***ptr=new int **[L];
    for(int i=0;i<L;i++){
         ptr[i]=new int *[N];
        for(int j=0;j<N;j++){
             ptr[i][j]=new int [M];
        }
    }

    for(int i=0;i<L;i++)
        for(int j=0;j<N;j++)
        for(int k=0;k<M;k++)
           ptr[i][j][k]=i+j+k;


    for(int i=0;i<L;i++){
        for(int j=0;j<N;j++){
        for(int k=0;k<M;k++){
          cout<< ptr[i][j][k]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
     }
return 0;
}
