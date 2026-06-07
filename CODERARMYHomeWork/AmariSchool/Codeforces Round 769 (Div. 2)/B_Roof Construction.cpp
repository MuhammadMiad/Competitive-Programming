#include<bits/stdc++.h>
using namespace std;
#define cn(x)  cin>>x
#define print(x) cout<<x<<endl
#define print_ys cout<<"YES"<<endl
#define print_no cout<<"NO"<<endl




///-------------------------------------------Muhammad_Miad--------------------------------------------------//
int solve(int x){
    return log2(x);
}
int main(){
    int t;
    cn(t);
    while(t--){
        int n;
        cn(n);
        if(n==2){
            cout<<1<<" "<<0<<endl;
            continue;
        }
        else{
            int current_value=n-1;
            while(current_value>1){
                cout<<current_value<<" ";
                if(solve(current_value)!=solve(current_value-1)){
                    break;
                }

                current_value--;
            }
            for(int i=0;i<current_value;i++)cout<<i<<" ";
            cout<<endl;
        }

    }

return 0;
}
