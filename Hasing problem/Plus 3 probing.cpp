#include<bits/stdc++.h>
using namespace std;

int hashFunction(int n, int m) {
    return n % m;
}

void plus3probingTable(int X, int size, vector<int>& plus3pro) {
    int i = 0, index = hashFunction(X, size);
    while (plus3pro[index] != -1) {
        index = (index + i * 3) % size;
        i++;
    }
    plus3pro[index] = X;
}


int plus3probingSearching(int X, int size, vector<int>& plus3pro) {
    int i = 0, index = hashFunction(X, size);
    while (plus3pro[index] != -1) {
            if(plus3pro[index] == X)
            {
                return index ;
            }
        index = (index + i * 3) % size;
        i++;
    }
}



int main() {
    vector<int> data{14, 12, 18, 13, 2, 3, 23, 5, 15};
   int size = 10;
    vector<int> plus3probing(size, -1);
    for (int X : data) {
        plus3probingTable(X, size, plus3probing);
    }

     for(int i =0; i<size;i++)
   {
     cout << i << " |     ";
   }
  cout <<endl;
    for (int key : plus3probing) {
        if (key == -1) {
            cout << " - |    ";
        } else {
            cout << key << " |    ";
        }
    }
    cout << endl;






   int inde =  plus3probingSearching(14, size,plus3probing);
   if(inde !=-1)
   {
       cout<<"YES we are found this value  at position = " << inde <<endl;
   }

   else
    {
       cout<<"NO we are not found this value  at position = " << inde <<endl;
   }

    return 0;
}

