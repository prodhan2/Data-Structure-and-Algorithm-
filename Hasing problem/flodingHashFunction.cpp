
#include <iostream>
#include <string>

using namespace std;

// Folding Method hash function
int foldingHashFunction(string key, int tableSize) {
    int sum = 0;

    // Calculate the sum of each group of three characters
    for (int i = 0; i < key.length(); i += 3) {
        string group = key.substr(i, 3);
        sum += stoi(group);
    }

    return sum % tableSize;
}

int main() {
    // Test the Folding Method hash function
    string key = "123456789";
    int tableSize = 17;
    int hashValue = foldingHashFunction(key, tableSize);

    cout << "Key: " << key << endl;
    cout << "Hash Value: " << hashValue << endl;

    return 0;
}
