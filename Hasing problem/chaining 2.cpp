
#include <bits/stdc++.h>
using namespace std;
#define MX 10
vector<int>v[MX];
void  chining(int n)
{
     int index = (n % MX);
    v[index].push_back(n);
}


void searching(int n1)
{int index = (n1%MX);
  for(int i =0;i<v[index].size();i++)
  {
      if(v[index][i] == n1)
      {
          cout <<"Found data at index <-"<<i<<endl;
          return;
      }
      else cout<<"DATA NOT found"<<endl;
  }


}
int main()
{
    cout<<"ENter some interger number ehwn you insert -1 stop input "<<endl;
    int n;
    while(cin>>n && n!=-1)
    {
        chining(n);
    }
    int n1;
    cout<<"Enter seaching input otherwise -1 to stop"<<endl;
    while(cin>>n1 && n1!=-1)
    {
      searching(n1);
    }

}
