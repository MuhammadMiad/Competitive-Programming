#include<bits/stdc++.h>
using namespace std;
int main(){
int mat[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>mat[i][j];
    }
}

int first,second;
for(int i=0;i<5;i++)
for(int j=0;j<5;j++){
    if(mat[i][j]!=0){
        first=i;
        second=j;
    }
}

int ans=abs(first-2)+abs(second-2);
cout<<ans<<endl;


return 0;
}
