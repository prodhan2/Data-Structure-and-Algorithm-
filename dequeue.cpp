
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();

deque<int>dq;
dq.push_back(1);
dq.push_back(2);
dq.push_back(3);
dq.push_front(4);
dq.push_front(5);
dq.push_front(6);
cout<<"SIZE :"<<dq.size()<<endl;
cout<<"Empty : "<<dq.empty()<<endl;

cout<<dq.front()<<" "<<dq.back()<<endl;
dq.pop_back();
dq.pop_front();
cout<<dq.front()<<" "<<dq.back()<<endl;
return 0;
}
