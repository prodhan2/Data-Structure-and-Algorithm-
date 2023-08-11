#include<bits/stdc++.h>
using namespace std;

 void tower(int n,char beg,char aux,char disti)
 {
     if(n<=0)
        cout<<"invalid type"<<endl;
     else if (n==1)
          cout <<"dises moive from "<< beg <<"   TO  "<<disti<<endl;
     else
     {
     tower(n-1,beg,disti,aux);
     tower(1,beg,aux,disti);
     tower(n-1,aux,beg,disti);

     }
}


 int main()
{
    int n;
    cout<<"Number of dise"<<endl;
    cin>>n;

    tower(n,'A','B','C');

}
