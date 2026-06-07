#include<bits/stdc++.h>
using namespace std;
int main(){
int matrix[5][4]={2,6,10,14,18,20,24,27,28,29,47,52,78,93,102,108,111,200,218,320};
int target=100;
int row=4,col=5;
int low=0,high=row*col-1;
while(low<=high){
    int mid=low+(high-low)/2;
    int row_index=mid/col;
    int col_index=mid%col;

    if(matrix[row_index][col_index]==target){
        cout<<"Yes,Find."<<endl;
        return 0;
    }
    else if(matrix[row_index][col_index]>target)high=mid-1;
    else low=mid+1;
}
cout<<"NO,Does not Find."<<endl;
return 0;
}
