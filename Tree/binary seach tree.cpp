#include<bits/stdc++.h>
using namespace std;

#define max 1000
vector<int> v(max, -1);

void insert(int m) {
    int index = 0;
    while (v[index] != -1) {
        if (v[index] == m) {
            cout << "Item is already exist at index " << index << endl;
            return;
        } else if (m > v[index]) {
            index = 2 * index + 1;  // Move to the left child
        } else {
            index = 2 * index + 2;  // Move to the right child
        }
    }
    v[index] = m;  // Insert the value at the empty slot
}

int main() {
    cout << "How many numbers you want to insert: " << endl;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        insert(m);  // Insert each number into the vector
    }

    cout << "Elements in the vector: ";
    for (int i = 0; i < max; i++) {
        if (v[i] != -1) {
            cout << v[i] << " ";  // Print the non-empty elements of the vector
        }
    }
    cout << endl;
    
    return 0;
}
