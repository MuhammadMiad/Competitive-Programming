//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int t;
//    cin>>t;while(t--){
//    int n;cin>>n;
//    vector<int>arr(n),brr(n);
//    int checkIt=0;
//    for(int i=0;i<n;i++){
//            cin>>arr[i];
//            if(arr[i]%2==0)checkIt++;
//    }
//    for(int i=0;i<n;i++)cin>>brr[i];
//
//   if(checkIt>1){
//    cout<<0<<endl;
//    continue;
//   }
//   else if(checkIt==1){
//    cout<<1<<endl;
//   }
//   else cout<<2<<endl;
//
//
//
//    }
//return 0;
//}


#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int a[N],b[N],sum[N];
vector<int> ret[N];
int main(){
	for(int i=2;i<N;i++)
		for(int j=i;j<N;j+=i)
			ret[j].push_back(i);

			for(int i=2;i<N;i++){
                    cout<<i<<"-->";
                for(int j=0;j<ret[i].size();j++){
                    cout<<ret[i][j]<<" ";
                }cout<<endl;
			}
//	int t,k,n;
//	string s;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		int flag=0;
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//			for(auto x:ret[a[i]]){
//				sum[x]++;
//				if(sum[x]>=2) flag=1;
//			}
//		}
//		for(int i=0;i<n;i++)
//			cin>>b[i];
//		if(flag) cout<<0<<endl;
//		else{
//			flag=0;
//			for(int i=0;i<n;i++){
//				for(auto x:ret[a[i]+1]){
//					if(sum[x]) flag=1;
//				}
//			}
//			if(flag) cout<<1<<endl;
//			else cout<<2<<endl;
//		}
//		for(int i=0;i<n;i++){
//			for(auto x:ret[a[i]])
//				sum[x]--;
//		}
//	}
	return 0;
}
