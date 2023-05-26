#include<bits/stdc++.h>
using namespace std;

void towerOFHanoi(int n,char source , char auxi ,char disti) {
    if(n==1)
    {
        cout<<"move disk 1 from "<< source <<" to "<< disti <<endl;
        return;
    }
    towerOFHanoi(n-1,source,disti,auxi);
      cout<<"move disk "<< n<<" from "<< source <<" to "<< disti <<endl;
      towerOFHanoi(n-1,auxi,source,disti);
}

int main()
{
  int n;
  cout<<"HOW MANY DISK"<<endl;
   cin>>n;

towerOFHanoi(n,'a','b','c');

}
