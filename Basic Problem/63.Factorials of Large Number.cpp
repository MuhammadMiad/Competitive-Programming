#include<bits/stdc++.h>
using namespace std;
vector<int>Factorial(int N){
 vector<int>ans(1,1);
        while(N){
            int carry=0,res,size=ans.size();
            for(int i=0;i<size;i++){
                res=ans[i]*N+carry;
                carry=res/10;
                ans[i]=res%10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            N--;
        }
        reverse(ans.begin(),ans.end());
        return ans;

}
int main(){
int N;
cout<<"Enter Number:"<<endl;
cin>>N;
 vector<int>ans=Factorial(N);
 for(int i=0;i<ans.size();i++)cout<<ans[i];
 cout<<endl;

return 0;
}
