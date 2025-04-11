#include <iostream>
using namespace std;



int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    // Iterative Binary Search
    int iterativeResult = binarySearchIterative(arr, size, target);
    if (iterativeResult != -1)
        cout << "Iterative: Element found at index " << iterativeResult << endl;
    else
        cout << "Iterative: Element not found" << endl;

    // Recursive Binary Search
    int recursiveResult = binarySearchRecursive(arr, 0, size - 1, target);
    if (recursiveResult != -1)
        cout << "Recursive: Element found at index " << recursiveResult << endl;
    else
        cout << "Recursive: Element not found" << endl;

    return 0;
}