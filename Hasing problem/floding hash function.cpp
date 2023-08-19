#include<bits/stdc++.h>
using namespace std;
int flodinghashfunction(int n,int size)
{
    int sum =0;
    string s = to_string(n);
   for(int i=0;i<s.size();i=i+3)
   {

       string substring = s.substr(i,3);
       sum += stoi(substring);
   }
   return sum%size;
}


int main()
{
   int size =13;
   int index =  flodinghashfunction(123456789,size);
   cout <<index <<endl;
}
