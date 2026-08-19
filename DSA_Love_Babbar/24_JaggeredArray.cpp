#include <iostream>
using namespace std;

int main() {

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Dynamically create array of row pointers
    int** arr = new int*[rows];

    // Store size of each row
    int* sizes = new int[rows];

    // Allocate each row dynamically
    for(int i = 0; i < rows; i++) {
        cout << "Enter number of elements in row " << i << ": ";
        cin >> sizes[i];

        arr[i] = new int[sizes[i]];
    }

    // Take input
    for(int i = 0; i < rows; i++) {
        cout << "Enter elements for row " << i << ": ";

        for(int j = 0; j < sizes[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Print jagged array
    cout << "\nJagged Array:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // Free each row
    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    // Free row-pointer array
    delete[] arr;

    // Free row-size array
    delete[] sizes;

    return 0;
}