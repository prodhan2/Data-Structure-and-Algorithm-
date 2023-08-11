#include<bits/stdc++.h>
using namespace std;
int hashFunction(int X,int size)
{
    return X%size;
}
void quardatricHashTable(int X,int size,vector<int>&HasTable)
{

    int i =0;
    int index = hashFunction(X,size);
    while(HasTable[index] !=-1)
    {
        index = (index +i*i)%size;
        i++;
    }
    HasTable[index] = X;
}
int quardatricHashTableSearch(int m,int size,vector<int>&HasTable)
{

    int i =0;
    int index = hashFunction(m,size);
    while(HasTable[index] !=-1)
    {
       if(HasTable[index]== m)
       {
           return index ;
       }
        index = (index +i*i)%size;
        i++;
    }
    return -1;

}
int main()
{
    vector<int>data{14, 12, 18, 13, 2, 3, 23, 5, 15};
    int size =10;
    vector<int>quadraticProbing(size ,-1);
    for(int X : data)
    {
        quardatricHashTable(X,size,quadraticProbing);
    }
   int out =  quardatricHashTableSearch(12,size,quadraticProbing);

   for(int i =0; i<size;i++)
   {
     cout << i << " |     ";
   }
  cout <<endl;
    for (int key : quadraticProbing) {
        if (key == -1) {
            cout << " - |    ";
        } else {
            cout << key << " |    ";
        }
    }
    cout << endl;



    if(out != -1)
   {
        cout << "yes we find your value at index == "<< out<<endl;
    }
    else
    {
        cout << "NO we find your value at index == "<< out<<endl;
    }

}
