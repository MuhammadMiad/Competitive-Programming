#include<iostream>
using namespace std;

int main()
{
    int t;
  cin>>t;
   while(t--){
    char a[3][3];
int i,j;
bool found;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]=='h')
            {

 if(((i + 1) < 3) && ((j + 2) < 3) && (a[i + 1][j + 2] == 'h'))
                {
                    found = true;
                    break;
                }
                else if(((i + 1) < 3) && ((j - 2) >= 0) && (a[i + 1][j - 2] == 'h'))
                {
                    found = true;
                    break;
                }



            }



        }
 if(found)
        {
            break;
        }


    }
    if(found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
   }
return 0;
}
