
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define row 2
#define col 2

void printMatrix(int mm[row][col])
{
    for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
          cout<< mm[i][j]<<" ";
       }
       cout<<"\n"<<endl;
   }
}
void sum(int a[row][col],int b[row][col] )
{ int summ[row][col];
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           summ[i][j] =a[i][j]+b[i][j];
       }
   }
   printMatrix(summ);


}
void subtraction(int a[row][col],int b[row][col])
{
    int sub[row][col];
for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           sub[i][j] =a[i][j]-b[i][j];
       }
   }
   printMatrix(sub);
}


void multiplication(int a[row][col], int b[row][col])
{

    int mul[row][col];
for(int i=0;i<col;i++)
   {
       for(int j=0;j<row;j++)
       {
           mul[i][j] =a[i][j] *b[j][i];
       }
   }
   printMatrix(mul);
}

int main()
{
fast();

int a[2][2]= {{1,2},{3,4}};
int b[2][2]= {{5,6},{7,8}};
cout<<"sum of two matrix"<<endl;
sum(a,b);
cout<<"subtarction of two matrix"<<endl;
subtraction(a,b);
cout<<"Multiplication  of two matrix"<<endl;
multiplication(a,b);

return 0;
}
