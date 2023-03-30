#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v;
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);
  v.erase(v.begin()+2);  // index 2 or 4 delete
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<" ";
  }
   cout<<endl;
   //2 3 5 6 7
   v.erase(v.begin()+2,v.end());  // ekhne delete hobe index 2 theke ses projom=nto

   //output 2 3
   for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<" ";
  }

}
