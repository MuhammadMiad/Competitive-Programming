#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
if(num==0 || num==1){
    cout<<"Nearest square integer:"<<num<<endl;
    return 0;
}

int start=1;
int End=num;
while(start<=End){
    int mid=start+(End-start)/2;

    if(mid>num/mid)End=mid-1;

    else if(mid<num/mid)start=mid+1;

    else {
        cout<<"Nearest square integer:"<<mid<<endl;
        return 0;
    }

}
cout<<"Nearest square integer:"<<End<<endl;
return 0;
}
