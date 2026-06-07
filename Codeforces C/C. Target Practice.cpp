#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    char arr[11][11];
    int c1,c2, c3,c4,c5;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin>>arr[i][j];
        }
    }
  c1=c2=c3=c4=c5=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
          if((i==1||i==10||j==1||j==10)&&arr[i][j]=='X')c1++;
          else if((i==2||i==9||j==2||j==9)&&arr[i][j]=='X')c2++;
          else if((i==3||i==8||j==3||j==8)&&arr[i][j]=='X')c3++;
          else if((i==4||i==7||j==4||j==7)&&arr[i][j]=='X')c4++;
          else if((i==5||i==6||j==5||j==6)&&arr[i][j]=='X')c5++;

        }

    }
    v.push_back((c1*1)+(c2*2)+(c3*3)+(c4*4)+(c5*5));

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
