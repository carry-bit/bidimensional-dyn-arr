#include <iostream>
using namespace std;

// Simple 2-dimensional dynamic array in c++

void inp(char question[], int &var);

int main() {
    
    int arr_row {0};
    int arr_col {0};
    
    int **arr {nullptr};
    
    inp("Rows of array : ", arr_row);
    inp("Cols of array : ", arr_col);
    
    arr = new int*[arr_row];
    
    for (int i = 0; i < arr_row; ++i)
        arr[i] = new int[arr_col];
    
    return 0;
}

void inp(char question[], int &var) {
    cout << question;
    cin >> var;
}
