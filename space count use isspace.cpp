

#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();

string s = "hi , i am sujan prodhjsn";//space here = 5
int count =0;
for(auto X : s)
{
    if(isspace(X))
    {
        count ++;
    }
}
cout<<count<<endl;
return 0;
}

