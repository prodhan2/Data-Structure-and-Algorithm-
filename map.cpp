#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp.insert({1,30});
    mp.insert({2,40});
    mp.insert({3,500});
    mp.insert({4,40});
     mp.insert({5,600});
    mp.insert({6,700});
    for(auto it:mp)
    {                                  //print rule1
        cout<<it.first<<" " <<it.second<<endl;

    }


    mp.clear();
    if(mp.empty())
        cout<<"empty"<<endl;
    else
        cout<<"not empty"<<endl;
//            print rule2
//    map<int,int>:: iterator it;
//for(it=mp.begin();it!=mp.end();it++)
//{
// cout<<it->first<<" "<<it->second<<endl;
//}



}
