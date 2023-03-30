
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();
vector<int> v = {1,3,3,455,66,777,44,455,33,322,22,2,1};

 int even = count_if(v.begin(),v.end(),[](int X){return X%2 == 0;});
 int odd = count_if(v.begin(),v.end(),[](int n){return n%2 ==1;});

cout<<even<<endl;
cout<<odd<<endl;
return 0;
}
