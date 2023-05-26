#include<bits/stdc++.h>
using namespace std;

int factorial(int n )
{
    if(n)
        return (n*factorial(n-1));
    else
        return 1;
}



 int main()
{

    int n;
    cout<<"Enter your number "<<endl;
    cin>>n;
    cout<<"N factorial ="<<factorial(n)<<endl;


}
