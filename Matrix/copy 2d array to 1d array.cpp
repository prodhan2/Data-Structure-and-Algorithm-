#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[9],i,j,k=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            b[k++] = a[i][j];
        }
        cout<<"all value of 1d array:"<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<b[i]<<" ";
    }
      cout<<endl;
    cout<<"Elements of column 3 "<<endl;
    for(int i=2;i<9;i=i+3)
    {
        cout<<b[i]<<" ";
    }
}
