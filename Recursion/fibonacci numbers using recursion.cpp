#include <bits/stdc++.h>
using namespace std;
int fibonnaci(int n)
{if(n==0)
     return 0;
if(n==1)
    return 1;
return fibonnaci(n-1)+fibonnaci(n-2);

}


int main()
{

  int n;
  cout<<"Ënter a number ";

    cin>>n;
    cout<<"fibonncci numbers are ="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<fibonnaci(i)<<endl;
    }
}
