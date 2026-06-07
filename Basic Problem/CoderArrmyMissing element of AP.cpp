/// total =((n+1)*(first_value + Last_value))/2;
///total=((6+1)*(2+14))/2=56;
///ans=total-sum(50);
///ans=56-50=6

#include<bits/stdc++.h>
using namespace std;
int findMissing(vector<int> &arr)
{
    int n=arr.size();
    int diff=(arr[arr.size()-1]-arr[0])/n;
    int left=0;
    int right=n-1;
    while(left<right)
    {
        int mid=left+(right-left)/2;

        if(arr[mid]==diff*mid+arr[0])
        {
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }
    return arr[left]-diff;
}
int main()
{
 vector<int>arr={2,4,8,10,12,14};
  cout<<"Missing Value:"<<findMissing(arr)<<endl;

    return 0;
}
