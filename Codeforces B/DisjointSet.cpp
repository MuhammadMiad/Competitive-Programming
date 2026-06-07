#include<bits/stdc++.h>
using namespace std;
#define n 100
int parent[n];

///Find function
bool flag=false;
int Find(int u){
 if(flag)
 cout<<"Called with"<<u<<endl;
 if(parent[u]==u)return u;
 return parent[u]=Find(parent[u]);
}
///Makeset function
void makeset(int u){
    parent[u]=u;
}

///init function
void init(){
 for(int i=1;i<=8;i++){
    makeset(i);
 }
}
///Union function
void Union(int u,int v){
 int p=Find(u);
 int q=Find(v);
 if(p!=q)parent[q]=p;
}
///isFriend function
bool isFriend(int u,int v){
   int p=Find(u);
   int q=Find(v);
   return q==p;
}
int main(){
 init();

 Union(7,8);
 Union(6,7);
 Union(5,6);
 Union(4,5);
 Union(3,4);
 Union(2,3);
 Union(1,2);


// if(isFriend(1,8))cout<<"There are friend!"<<endl;
// else cout<<"There are not friends!"<<endl;

flag=true;
Find(8);
cout<<"-----"<<endl;
Find(8);

return 0;
}
