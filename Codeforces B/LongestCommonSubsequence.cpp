#include<bits/stdc++.h>
using namespace std;
#define N  100
#define M 100
int arr[N][M];
char  b[N][M];

void   LCS(string x,string y,int n,int m){
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
     if(x[i-1]==y[j-1]){
        arr[i][j]=arr[i-1][j-1]+1;
       b[i][j]='\\';
             }
     else if(x[i-1]!=y[j-1]){
        if(arr[i-1][j]>=arr[i][j-1]){
            arr[i][j]=arr[i-1][j];
            b[i][j]='|';
        }
        else{
            arr[i][j]=arr[i][j-1];
            b[i][j]='-';
        }
     }
    }

}


for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;

}

//while(n!=0&&m!=0){
//    if(n==0||m==0) return;
//    if(b[n][m]=='\\'){
//        n--;
//        m--;
//         s[n];
//    }
//    else if(b[n][m]=='|')n--;
//    else m--;

//}
//cout<<endl;

}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    LCS(s1,s2,n,m);



return 0;
}
