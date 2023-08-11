#include<bits/stdc++.h>
using namespace std;
int long long fact(int x)
{
    if(x==0)
        return 1;
    return x * fact(x-1);
}



long long fibo(int n)
{
    if (n == 0)
        return 1;
    if(n == 1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}



int main()
{
    cout <<"Enter any position number for factorial :"<<endl;
    int n ;
    cin>>n;
    cout <<"factorial of  " << n <<"  is "<< fact(n) <<endl;


    cout <<"Enter any position numberfor fibonacci  :"<<endl;
    int m ;
    cin>>m;
    cout <<"fibonacci  of  " << m <<"  is "<< fibo(m);
}




