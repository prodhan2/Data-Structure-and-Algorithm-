
#include<bits/stdc++.h>
using namespace std;
int hashFunction(int n,int size)
{
    return size%n;
}


void chainingTab(int key,int size,vector<vector<int> > & hashTable)
{
    int index = hashFunction(key,size);
    hashTable[index].push_back(key);
}


int chainingSearch(int key,int size,vector<vector<int> > & hashTable)
{
    int index = hashFunction(key,size);
    hashTable[index].push_back(key);
    for(int i=0;i<hashTable[index].size();i++)
    {
        if(hashTable[index][i] == key)
            return index ;
    }
    return -1;
}


int main()
{
    vector<int>data{54,26,93,17,77,31,44,55,20};
    int size =11;
vector<vector<int>>chainingTable(size ,vector<int>());
for(int X : data)
{
    chainingTab(X,size,chainingTable);
}

int searchValue=44;
int  index = chainingSearch(searchValue,size,chainingTable);
if(index != -1)
{
    cout<<"yes we are found search iteam at indes =    "<<index<<endl;
}
else{
    cout<<"sorry we are not found your search iteam"<<endl;
}

   return 0;
}
