#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        if(n==2){
          if(n==2 and abs(arr[0]-arr[1])<=1){
            cout<<0<<endl;
         }
         else cout<<-1<<endl;
        }
        else{    int flag=0;
                for(int i=0;i<n-1;i++){
                    if(abs(arr[i]-arr[i+1])<=1){
                         flag=1;
                        break;
                    }
                }
                if(!flag){
                        int cnt=0;
                while(1){
                     int Mn=INT_MAX,Min=INT_MAX,j;
                     int mn,mx,x,y,z,o,p,q;
                    for(int i=0;i<arr.size();i++){
                         mn=min(arr[i],arr[i+1]);
                         mx=max(arr[i],arr[i+1]);
                        if(i+2<arr.size())
                         x=abs(mn-arr[i+2]);
                        if(i+2<arr.size())
                        y=abs(mx-arr[i+2]);
                        z=(mn+mx)/2;
                        if(i-1>=0)
                        o=abs(mn-arr[i-1]);
                        if(i-1>=0)
                        p=abs(mx-arr[i-1]);



                        if(min(x,min(y,z))<=1||min(o,min(p,z))<=1){
                            cnt++;
                            break;
                        }
                        if(Mn>min(x,min(y,z))){
                            Mn=min(x,min(y,z));
                            j=i;
                        }
                        if(Min>min(o,min(p,z))){
                            Min=min(o,min(p,z));
                            q=i;
                        }


                    }
                    if(cnt){
                        cout<<cnt<<endl;
                        break;
                    }
                    else{
                        vector<int>temp;
                        if(Mn<Min){
                            for(int i=0;i<arr.size();i++){
                           if(i==j){
                            arr[i]=max(mn,max(mx,z));
                            arr[i+1]=-1;
                           }
                        }
                        }
                        else{
                           for(int i=0;i<arr.size();i++){
                           if(i==q){
                            arr[i]=max(mn,max(mx,z));
                            arr[i+1]=-1;
                           }
                        }
                        }

                        for(int i=0;i<arr.size();i++){
                          if(arr[i]!=-1)
                            temp.push_back(arr[i]);
                        }
                        arr.clear();
                        for(int i=0;i<temp.size();i++){
                            arr.push_back(temp[i]);
                        }
                        temp.clear();

                        for(int i=0;i<n-1;i++){
                         if(abs(arr[i]-arr[i+1])<=1){
                          cout<<cnt<<endl;
                          break;
                    }
                }
                if(arr.size()==2 and abs(arr[0]-arr[1])>1){
                        cout<<-1<<endl;
                break;

                }
                    }
                }

                }
                else cout<<0<<endl;


        }

    }

return 0;
}
