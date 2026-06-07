#include<bits/stdc++.h>
using namespace std;
int xx[4]={-1,1,0,0};
int yy[4]={0,0,-1,1};
#define cn(x) cin>>x
#define iarr(arr,n) for(int i=0;i<n;i++){cin>>arr[i]; }
#define run_arr(i,x,y) for(int i=x;i<=y;i++)

int valid(int i,int j,int n){
 return i>=0&&j>=0&&i<n&&j<n;
}

int main(){
int n;
cin>>n;
char x;
int cnt=0;
vector<vector<char>>arr(n,vector<char>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>x;
      arr[i][j]=x;
      if(x=='#')cnt++;
    }
}

int total=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
          if((valid(i+xx[0],j+yy[0],n)&&valid(i+xx[1],j+yy[1],n)&&valid(i+xx[2],j+yy[2],n)&&valid(i+xx[3],j+yy[3],n)) and (arr[i+xx[0]][j+yy[0]]=='#'&&arr[i][j]=='#'&& arr[i+xx[3]][j+yy[3]]=='#'&&arr[i+xx[1]][j+yy[1]]=='#'&& arr[i+xx[2]][j+yy[2]]=='#'))
          {
              total++;
              arr[i+xx[0]][j+yy[0]]='.';
              arr[i][j]='.';
              arr[i+xx[3]][j+yy[3]]='.';
              arr[i+xx[1]][j+yy[1]]='.';
              arr[i+xx[2]][j+yy[2]]='.';
          }

    }
}
if(cnt==0)cout<<"YES"<<endl;
else if(total*5==cnt)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


return 0;
}
