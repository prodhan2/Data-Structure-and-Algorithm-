#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(23);   //push_back
    v.push_back(87);

    v.push_back(57);
    v.push_back(83);
    v.push_back(34);
    v.push_back(89);
    cout<<v[0]<<endl;
    for(int i=0;i<v.size();i++)
      {
          cout<<v[i]<<" ";
      }
  cout<<endl;

  cout<<v.front()<<endl;    //front
  cout<<v.back()<<endl;   //back
  v.clear();   //clear
  if(v.empty()) //empty
    cout<<"file doesnot exit"<<endl;
  else
    cout<<"file ok"<<endl;





}
