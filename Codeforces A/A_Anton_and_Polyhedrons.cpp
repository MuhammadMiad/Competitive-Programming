#include<bits/stdc++.h>
using namespace std;
int main(){
int n,co=0;
string k;
cin>>n;
for(int i=0;i<n;i++){
    cin>>k;
    if("Tetrahedron" ==k){
        co+=4;
    }
    else if("Cube"==k){
        co+=6;
    }
    else if("Octahedron"==k){
        co+=8;
    }
    else if("Dodecahedron"==k){
        co+=12;
    }
    else if("Icosahedron"==k){
        co+=20;
    }
}

cout<<co<<endl;
return 0;
}
