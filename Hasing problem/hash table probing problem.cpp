
#include <iostream>
#include <vector>

using namespace std;

int hashFunction(int key, int size) {
    return key % size;
}

void linearProbing(int key, int size, vector<int>& hashTable) {
    int index = hashFunction(key, size);
    while (hashTable[index] != -1) {
        index = (index + 1) % size;
    }
    hashTable[index] = key;

}

int searchLinearProbing(int key, int size, vector<int>& hashTable) {
    int index = hashFunction(key, size);
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            return index;
        }
        index = (index + 1) % size;
    }
    return -1;
}

void quadraticProbing(int key, int size, vector<int>& hashTable) {
    int index = hashFunction(key, size);
    int i = 0;
    while (hashTable[index] != -1) {
        index = (index + i * i) % size;
        i++;
    }
    hashTable[index] = key;
}

int searchQuadraticProbing(int key, int size, vector<int>& hashTable) {
    int index = hashFunction(key, size);
    int i = 0;
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            return index;
        }
        index = (index + i * i) % size;
        i++;
    }
    return -1;
}

void chaining(int key, int size, vector<vector<int>>& hashTable) {
    int index = hashFunction(key, size);
    hashTable[index].push_back(key);
}

int searchChaining(int key, int size, vector<vector<int>>& hashTable) {
    int index = hashFunction(key, size);
    for (int i = 0; i < hashTable[index].size(); i++) {
        if (hashTable[index][i] == key) {
            return index;
        }
    }
    return -1;
}

int main() {
    vector<int> data = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int tableSize = 11; // Prime number

    // Initialize the hash table with -1 values
    vector<int> linearHashTable(tableSize, -1);
    vector<int> quadraticHashTable(tableSize, -1);
    vector<vector<int>> chainingHashTable(tableSize, vector<int>());

    // Store data in the hash table using linear probing
    for (int num : data) {
        linearProbing(num, tableSize, linearHashTable);
    }

    // Search for an item in the hash table using linear probing
    int searchKey = 44;
    int linearIndex = searchLinearProbing(searchKey, tableSize, linearHashTable);
    if (linearIndex != -1) {
        cout << "Linear Probing: Found at index " << linearIndex << endl;
    } else {
        cout << "Linear Probing: Not found" << endl;
    }

    // Store data in the hash table using quadratic probing
    for (int num : data) {
        quadraticProbing(num, tableSize, quadraticHashTable);
    }

    // Search for an item in the hash table using quadratic probing
    int quadraticIndex = searchQuadraticProbing(searchKey, tableSize, quadraticHashTable);
    if (quadraticIndex != -1) {
        cout << "Quadratic Probing: Found at index " << quadraticIndex << endl;
    } else {
        cout << "Quadratic Probing: Not found" << endl;
    }

    // Store data in the hash table using chaining
    for (int num : data) {
        chaining(num, tableSize, chainingHashTable);
    }

    // Search for an item in the hash table using chaining
    int chainingIndex = searchChaining(searchKey, tableSize, chainingHashTable);
    if (chainingIndex != -1) {
        cout << "Chaining: Found at index " << chainingIndex << endl;
    } else {
        cout << "Chaining: Not found" << endl;
    }

    return 0;
}
