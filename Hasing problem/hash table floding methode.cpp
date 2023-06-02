
#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Hash Table size, a prime number
const int TABLE_SIZE = 17;

// Hash Table using vector of pairs to store key-value pairs
vector<pair<int, string>> hashTable(TABLE_SIZE, make_pair(-1, ""));

// Folding Method hash function
int foldingHashFunction(int key) {
    int sum = 0;
    while (key > 0) {
        sum += key % 100; // taking two digits at a time
        key /= 100;
    }
    return sum % TABLE_SIZE;
}

// Mid Square Method hash function
int midSquareHashFunction(int key) {
    int square = key * key;
    string squareString = to_string(square);
    int index = squareString.length() / 2;
    string substring = squareString.substr(index, 2);
    return stoi(substring) % TABLE_SIZE;
}

// Character-Based Method hash function
int characterHashFunction(const string& value) {
    int sum = 0;
    for (char ch : value) {
        sum += ch;
    }
    return sum % TABLE_SIZE;
}

// Plus 3 Probing to resolve collisions
int plus3Probing(int index, int count) {
    return (index + (count * 3)) % TABLE_SIZE;
}

// Quadratic Probing to resolve collisions
int quadraticProbing(int index, int count) {
    return (index + (count * count)) % TABLE_SIZE;
}

// Hash Table using list to handle collisions with Chaining
vector<list<pair<int, string>>> chainedHashTable(TABLE_SIZE);

// Store data in the hash table using Linear Probing
void insertDataLinearProbing(int key, const string& value) {
    int index = foldingHashFunction(key);
    int count = 0;

    while (hashTable[index].first != -1) {
        index = plus3Probing(index, ++count);
    }

    hashTable[index] = make_pair(key, value);
}

// Search for an item in the hash table using Linear Probing
string searchDataLinearProbing(int key) {
    int index = foldingHashFunction(key);
    int count = 0;

    while (hashTable[index].first != -1) {
        if (hashTable[index].first == key) {
            return hashTable[index].second;
        }
        index = plus3Probing(index, ++count);
    }

    return "Item not found.";
}

// Store data in the hash table using Quadratic Probing
void insertDataQuadraticProbing(int key, const string& value) {
    int index = midSquareHashFunction(key);
    int count = 0;

    while (hashTable[index].first != -1) {
        index = quadraticProbing(index, ++count);
    }

    hashTable[index] = make_pair(key, value);
}

// Search for an item in the hash table using Quadratic Probing
string searchDataQuadraticProbing(int key) {
    int index = midSquareHashFunction(key);
    int count = 0;

    while (hashTable[index].first != -1) {
        if (hashTable[index].first == key) {
            return hashTable[index].second;
        }
        index = quadraticProbing(index, ++count);
    }

    return "Item not found.";
}

// Store data in the hash table using Chaining
void insertDataChaining(int key, const string& value) {
    int index = characterHashFunction(value);
    chainedHashTable[index].push_back(make_pair(key, value));
}

// Search for an item in the hash table using Chaining
string searchDataChaining(int key) {
    int index = characterHashFunction(key);

    for (const auto& pair : chainedHashTable[index]) {
        if (pair.first == key) {
            return pair.second;
        }
    }

    return "Item not found.";
}

int main() {
    // Store some data in the hash table using Linear Probing
    insertDataLinearProbing(123456, "John");
    insertDataLinearProbing(789012, "Alice");
    insertDataLinearProbing(345678, "Bob");
    insertDataLinearProbing(901234, "Lisa");
    insertDataLinearProbing(567890, "Mike");

    // Search for data in the hash table using Linear Probing
    cout << "Linear Probing - Search Result: " << searchDataLinearProbing(123456) << endl;
    cout << "Linear Probing - Search Result: " << searchDataLinearProbing(789012) << endl;
    cout << "Linear Probing - Search Result: " << searchDataLinearProbing(345678) << endl;
    cout << "Linear Probing - Search Result: " << searchDataLinearProbing(901234) << endl;
    cout << "Linear Probing - Search Result: " << searchDataLinearProbing(567890) << endl;
    cout << "Linear Probing - Search Result: " << searchDataLinearProbing(999999) << endl;

    // Store some data in the hash table using Quadratic Probing
    insertDataQuadraticProbing(123456, "John");
    insertDataQuadraticProbing(789012, "Alice");
    insertDataQuadraticProbing(345678, "Bob");
    insertDataQuadraticProbing(901234, "Lisa");
    insertDataQuadraticProbing(567890, "Mike");

    // Search for data in the hash table using Quadratic Probing
    cout << "Quadratic Probing - Search Result: " << searchDataQuadraticProbing(123456) << endl;
    cout << "Quadratic Probing - Search Result: " << searchDataQuadraticProbing(789012) << endl;
    cout << "Quadratic Probing - Search Result: " << searchDataQuadraticProbing(345678) << endl;
    cout << "Quadratic Probing - Search Result: " << searchDataQuadraticProbing(901234) << endl;
    cout << "Quadratic Probing - Search Result: " << searchDataQuadraticProbing(567890) << endl;
    cout << "Quadratic Probing - Search Result: " << searchDataQuadraticProbing(999999) << endl;

    // Store some data in the hash table using Chaining
    insertDataChaining(123456, "John");
    insertDataChaining(789012, "Alice");
    insertDataChaining(345678, "Bob");
    insertDataChaining(901234, "Lisa");
    insertDataChaining(567890, "Mike");

    // Search for data in the hash table using Chaining
    cout << "Chaining - Search Result: " << searchDataChaining(123456) << endl;
    cout << "Chaining - Search Result: " << searchDataChaining(789012) << endl;
    cout << "Chaining - Search Result: " << searchDataChaining(345678) << endl;
    cout << "Chaining - Search Result: " << searchDataChaining(901234) << endl;
    cout << "Chaining - Search Result: " << searchDataChaining(567890) << endl;
    cout << "Chaining - Search Result: " << searchDataChaining(999999) << endl;

    return 0;
}
