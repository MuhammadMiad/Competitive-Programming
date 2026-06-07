 /*   *   1       1     A
   **    22      12    AB
  ***   333     123   ABC
 ****  4444    1234  ABCD
***** 55555   12345 ABCDE

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++){
    cout<<" ";
}
for(int j=1;j<=i;j++){
        char ch='A'+j-1;
    cout<<ch;
}
cout<<endl;
}
return 0;
}


