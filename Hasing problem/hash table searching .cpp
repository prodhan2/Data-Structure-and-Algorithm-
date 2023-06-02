
#include<bits/stdc++.h>
using namespace std;
int hashFunction(int n,int size)
{
    return n%size;
}
void  linearProbing(int n,int size,vector<int>&hashTable)
{
    int index = hashFunction(n,size);
    while(hashTable[index] != -1)
    {
        index = (index+1)%size;
    }
    hashTable[index]=n;


}
int  linearProbingSearch(int n,int size,vector<int>& hashTable)
{
    int index = hashFunction(n,size);
    while(hashTable[index] != -1)
    {
         if(hashTable[index] == n){
            return index;
        }
        index = (index+1) % size;
    }
    return -1;


}


int main()
{
vector<int>data{54,26,93,17,77,31,44,55,20};
int size = 11;
vector<int>linear(size,-1);
for(int X : data)
{
    linearProbing(X,size,linear);
}
int searching = 44;

int indexOF = linearProbingSearch(searching ,size,linear);

    if(indexOF != -1)
    {
        cout<<"YES found linear search at index :     "<<indexOF<<endl;
    }

   return 0;
}
