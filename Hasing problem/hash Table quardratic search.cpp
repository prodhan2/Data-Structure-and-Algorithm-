
#include<bits/stdc++.h>
using namespace std;
int hashFunction(int n,int size)
{
    return n%size;
}
void quardatricHashTable(int key,int size,vector<int> &HashTable)
{int indx= hashFunction(key,size);
   int i =0;
   while(HashTable[indx] != -1)
         {
           indx = (indx +(i*i))  % size ;
            i++;
         }
     HashTable[indx] = key;
}



int quardatricHashTableSearch(int key,int size,vector<int> &HashTable)
{int indx= hashFunction(key,size);
   int i =0;
   while(HashTable[indx] != -1)
         {
             if(HashTable[indx] == key)
             {
                 return indx ;
             }
           indx = (indx +(i*i))  % size ;
            i++;
         }
     return -1;
}
int main()
{
    vector<int>data{54,26,93,17,77,31,44,55,20};
    int size = 11;
    vector<int>quardatric(size,-1);
    for(int X: data)
    {
        quardatricHashTable(X,size,quardatric);
    }
int SearchIteam = 44;
int index = quardatricHashTableSearch(SearchIteam,size,quardatric);
   if(index != -1)
   {
       cout<<"Yes we found it at index =    "<<index<<endl;
   }
   else{
    cout<<"sorry we are not found index"<<endl;
   }
   return 0;
}
