
#include<bits/stdc++.h>
#define mx 4
int a[mx][mx][mx],b[mx][mx][mx],c[mx][mx][mx];
using namespace std;

int main()
{
    cout <<"insert 4 X 4 matrix "<<endl;
    for(int i=0;i<mx;i++)
    {
        for(int j=0;j<mx;j++)
        {
            cin>>a[0][i][j];
        }
    }


    for(int m=1;m<mx;m++)
      {
        for(int i=0;i<mx;i++)
    {
        for(int j=0;j<mx;j++)
        {
             for(int k=0;k<mx;k++)
             {
                b[m][i][j] = a[m-1][i][k] * a[0][k][j] ;
             }
           a[m][i][j] = b[m][i][j];
        }
    }


       }


       for(int m=0;m<mx;m++)
      {
          cout<<"matrix A^"<<m<<endl;
        for(int i=0;i<mx;i++)
        {
        for(int j=0;j<mx;j++)
        {
         cout<<a[m][i][j] <<" ";
        }
        cout <<endl;
        }
        cout<<endl<<endl;
    }




    for(int i =0;i<mx;i++)
    {
        for (int j=0;j<mx;j++)
        {  for(int k =0;k<mx;k++)
        {
          c[0][i][j] +=a[k][i][j];
        }

        }
    }

   cout<<"THIS IS Br"<<endl;
     for(int i =0;i<mx;i++)
    {
        for (int j=0;j<mx;j++)
        {  cout<<c[0][i][j]<<" ";

        }
        cout<<endl;
    }
cout<<endl;
    //strongly connected or not

    int m =1;
for(auto x : c)
{
    if(x <=0)
    {
       int m = 0;
        break;

    }

}
if(m==1)
     cout<<"This matrix is strongly connected"<<endl;

else  cout<<"this matrix is Not strongly connected"<<endl;




}

//this is my own tecnique bro 🤣🤣🤣
