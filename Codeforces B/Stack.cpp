#include<bits/stdc++.h>
using namespace std;
stack<int >st;

int main(){



    while(1){
int n ,psh;
    cout<<"WELL COME  TO  YOUR   MAIN MANU"<<endl;
    cout<<" 1.Pushed Value\n 2.Popped Value \n 3.Top Value 4.Display \n 5.Clear display \n 6.Exit \n Enter your Value:"<<endl;
  cin>>n;

  switch(n){
  case 1:
      cout<<"Enter  push  your  value  in stack:"<<endl;
      cin>>psh;

      break;
  case 2:
      cout<<"Popped  value:"<<st.pop()<<endl;

    break;
  case 3:
    break;
  case 4:
      for(int i=st.top();i<st.end();i++){
        cout<<st.at(i)<<endl;
      }
    break;
  case 5:
      system("cls");
    break;
  case 6:
      exit(0);
    break;
    }
    }




return 0;
}
