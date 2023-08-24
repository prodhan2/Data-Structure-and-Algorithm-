#include<bits/stdc++.h>
using namespace std;
#define mx 1000
int bst[mx];
void Insert(int val)
{
    int index = 0;
    while(bst[index]!=-mx)
    {
        if(bst[index]==val)
        {
            cout<<val <<" is found at "<<index<<endl;
            return;
        }
        else if(val>bst[index])
        {
            index = 2*index + 2;
        }
        else
        {
            index = 2*index + 1;
        }
    }
    bst[index] = val;
}
int main()
{
    fill(bst,bst+mx,-mx);
    cout<<"Number of element : "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int item;
        cin>>item;
        Insert(item);

    }
    for(int i=0;i<mx;i++)
    {
        if(bst[i]!=-mx)
        {
            cout<<bst[i]<<" ";
        }
    }
    cout<<endl;
    Insert(12);
    return 0;

}
