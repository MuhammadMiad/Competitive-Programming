#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;
    int n;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<< "   " ;
    }
    cout<<endl;
    cout<<"Font Value:"<<v.front()+2<<endl;
    cout<<"Back Value:"<<v.back()<<endl;

    if (v.empty())
        cout<<"Blank"<<endl;
    else
        cout<<"Not Blank"<<endl;

        v.erase(v.begin()+2,v.end()-3);
      for(auto x:v)
        cout<<x<< " ";
}



