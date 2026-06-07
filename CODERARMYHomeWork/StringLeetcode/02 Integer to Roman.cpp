                    /*************In the name of Allah, the Most Gracious, the Most Merciful***************
                    *                                        Poet :                                       *
                                                            Miad
                    *                                    (muhammadmiad)                                   *
                    |                               muhammadmiad25@gmail.com                               |
                    **************************************************************************************//*
                                            I have a clumsy apprentice called Einstein.
*/#include<bits/stdc++.h>
using namespace std;
///data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
///I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)

///..............................................Let's Start with main function, shan't we.?......................................
void solve(){
   int n;
   cin>>n;
   string str;
   while(n){
    if(n>=1000){
        str+='M';
        n-=1000;
    }
    else if(n>=900){
        str+='C';
        str+='M';
        n-=900;
    }
    else if(n>=500){
        str+='D';
        n-=500;
    }
    else if(n>=400){

        str+='C';
        str+='D';
        n-=400;
    }
    else if(n>=100){
        str+='C';
        n-=100;
    }
    else if(n>=90){
        str+='X';
        str+='C';
        n-=90;
    }
    else if(n>=50){
        str+='L';
        n-=50;
    }
    else if(n>=40){
        str+='X';
        str+='L';
        n-=40;
    }
    else if(n>=10){
        str+='X';
        n-=10;
    }
    else if(n>=9){
        str+='I';
        str+='X';
        n-=9;
    }
    else if(n>=5){
      str+='V';
      n-=5;
    }
    else if(n>=4){
        str+='I';
        str+='V';
        n-=4;
    }
    else {
        str+='I';
        n-=1;
    }
   }

   cout<<str<<endl;

}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}

