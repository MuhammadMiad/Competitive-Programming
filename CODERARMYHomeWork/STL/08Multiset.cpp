#include<bits/stdc++.h>
using namespace std;
int main(){
multiset<int>ms;
ms.insert(45);
ms.insert(45);
ms.insert(30);
ms.insert(30);
ms.insert(40);

for(auto it:ms)cout<<it<<" ";
cout<<endl;
return 0;
}
