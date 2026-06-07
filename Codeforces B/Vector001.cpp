#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int >v,v1;
v.push_back(5);
v.push_back(50);
v.push_back(15);
v.push_back(25);
v.push_back(12);


v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
v1.push_back(4);
v1.push_back(5);

cout<<"Before swapping v"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<< " ";

}
cout<<endl;
cout<<"Before swapping v1"<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1.at(i)<< " ";

}


cout<<endl;

v.insert(v.begin()+3,11);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}


swap(v1,v);

cout<<endl;
cout<<"After swapping v"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<< " ";

}
cout<<endl;
cout<<"After swapping v1"<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1.at(i)<< " ";

}

sort(v1.begin(),v1.end());
cout<<endl<<"After sort V"<<endl ;
for(int i=0;i<v1.size();i++){
    cout<<v1.at(i)<< " ";

}

reverse(v1.begin(),v1.end());
cout<<endl<<"After reverse V"<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<< " ";

}




}
