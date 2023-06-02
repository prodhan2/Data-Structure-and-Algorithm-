#include <iostream>
#include <string>

using namespace std;

// Character-Based Method hash function
int characterHashFunction( string value, int tableSize) {
    int sum = 0;

    // Calculate the sum of ASCII values of characters
    for (char ch : value) {
        sum += ch;
    }

    return sum % tableSize;
}

int main() {
    // Test the Character-Based Method hash function
    string value = "OpenAI";
    int tableSize = 17;
    int hashValue = characterHashFunction(value, tableSize);

    cout << "Value: " << value << endl;
    cout << "Hash Value: " << hashValue << endl;

    return 0;
}

