#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define row 2
#define col 2

void printMatrix(int mm[row][col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << mm[i][j] << " ";
        }
        cout << "\n";
    }
}

void sum(int a[row][col], int b[row][col])
{
    int summ[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            summ[i][j] = a[i][j] + b[i][j];
        }
    }
    printMatrix(summ);
}

void subtraction(int a[row][col], int b[row][col])
{
    int sub[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    printMatrix(sub);
}

void multiplication(int a[row][col], int b[row][col])
{
    int mul[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            mul[i][j] = 0; // Initialize the value of the product matrix element
            for(int k = 0; k < col; k++) // Perform the inner loop for multiplication
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printMatrix(mul);
}

int main()
{
    fast();

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};

    cout << "Sum of two matrices" << endl;
    sum(a, b);

    cout << "Subtraction of two matrices" << endl;
    subtraction(a, b);

    cout << "Multiplication of two matrices" << endl;
    multiplication(a, b);

    return 0;
}
