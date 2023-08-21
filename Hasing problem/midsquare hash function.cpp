#include<bits/stdc++.h>
using namespace std;

#define size 12

// Custom hash function using mid-square method
int hashFunction(int n) {
    int length = log10(n) + 1;
    int index;

    if (length % 2 != 0) {
        // For odd-length number, take middle digit and modulo by size
        index = n / pow(10, length / 2);
        index = index % 10;
    } else {
        // For even-length number, take middle two digits and modulo by size
        index = n / pow(10, (length - 1) / 2);
        index = index % 100;
    }

    // Return the final index modulo by size
    return (index % size);
}

int main() {
    int n;
    cout << "Enter a value to get the mid-square hash function index. Enter -1 to stop." << endl;

    while (cin >> n && n != -1) {
        cout << "Index at: " << hashFunction(n) << endl;
    }

    return 0;
}
