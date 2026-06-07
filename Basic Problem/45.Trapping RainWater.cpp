#include<bits/stdc++.h>
using namespace std;
///Approach-1
int trappingWater(vector<int>& height) {  ///Time Complexity:O(n)
                                          ///Space Complexity:O(n)
        int mxL[height.size()];
        int mxR[height.size()];
        mxL[0]=height[0];
        for(int i=1;i<height.size();i++){
            mxL[i]=max(mxL[i-1],height[i]);
        }
        mxR[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            mxR[i]=max(mxR[i+1],height[i]);
        }
        int water[height.size()];
        for(int i=0;i<height.size();i++){
            water[i]=min(mxL[i],mxR[i])-height[i];
        }
        int sum=0;
        for(int i=0;i<height.size();i++)sum+=water[i];


        return sum;
    }
///Time Complexity:O(n) ///Space Complexity:O(1)
///Approach-2
//long long trappingWater(vector<int> &height) {
//        int n=height.size();
//        long long water=0;
//        int leftmax=0,rightmax=0,index,heightMax=height[0];
//       for(int i=1;i<n;i++){
//        if(heightMax<height[i]){
//             heightMax=height[i];
//             index=i;
//        }
//       }
//
//       for(int i=0;i<index;i++){
//        if(leftmax>height[i])water+=leftmax-height[i];
//        else leftmax=height[i];
//       }
//
//       for(int i=n-1;i>index;i--){
//        if(rightmax>height[i])water+=rightmax-height[i];
//        else rightmax=height[i];
//       }
//    return water;
//    }


int main(){
    vector<int>arr={0,1,0,2,1,0,1,3,2,1,2,1};
   cout<<"Trapping Rain Water: "<<trappingWater(arr)<<endl;

return 0;
}
