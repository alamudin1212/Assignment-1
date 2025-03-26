#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare the array
    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize the smallest number to the first element
    int smallest = arr[0];
    // Loop through the array to find the smallest number
   for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];       }
    }

    // Output the smallest number
   cout << "The smallest number in the array is: " << smallest << endl;
    return 0;
}
