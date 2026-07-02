/*
    Program: Array Input and Output
    Description:
    Accepts array elements from the user and displays them using loops.
*/

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter element " << i << " : ";
        cin >> arr[i];
    }
    cout << "\nArray Elements: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Index " << i << " : " << arr[i] << endl;
    }

    return 0;
}
