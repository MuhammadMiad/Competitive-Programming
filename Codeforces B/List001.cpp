#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int >lis1 , lis2;
    lis1.push_back(10);
    lis1.push_back(20);
    lis1.push_back(30);
    lis1.push_back(40);
    lis1.push_back(40);

    lis2.push_back(50);
    lis2.push_back(60);
    lis2.push_back(60);
    lis2.push_back(70);




//
//    li.push_front(5);
//    li.pop_back();
//    li.pop_front();
//
//    list<int>::iterator it;
//    it=li.begin();
//    advance(it,2);
//    li.insert(it,100);
//
//    for(auto it:li)
//        cout<<it<< "  " ;
//
//        cout<<endl;
//  cout<<"Front Value:"<<li.front()<<endl;
//  cout<<"Back Value:"<<li.back()<<endl;


//li.remove(40);

//li.reverse();
//li.unique();

lis1.swap(lis2);

for(auto x:lis1)
    cout<<x<< " ";
cout<<endl;
//list <int> ::iterator it,it1;
//it=li.begin();
//it1=li.begin();
//it1=li.end();
//advance(it,2);
////advance(it1,4);
//
//li.erase(it,it1);
//for(auto x:li)
//    cout<<x << " ";
//cout<<endl;
return 0;
}
