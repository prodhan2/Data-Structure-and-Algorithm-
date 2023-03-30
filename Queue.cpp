#include <bits/stdc++.h>
#define fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
   fast();
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   cout<<q.size()<<endl;
   while(!q.empty())
   { cout<<q.front()<<endl;
      q.pop();
   }



   }


