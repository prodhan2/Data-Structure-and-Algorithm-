
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();
int n ;
cin>>n;
string binary = bitset<32>(n).to_string();
for(auto X : binary)
{
    cout<<X<<" ";
}
cout<<endl;
return 0;
}
