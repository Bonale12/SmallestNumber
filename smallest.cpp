#include <iostream>
#include <limits.h>  // For INT_MAX

using namespace std;

int main() {
    int size;
    
    // Ask the user for the size of the array (number of elements)
    cout << "Enter the number of elements: ";
    cin >> size;
    
    if (cin.fail() || size <= 0) {
        cout << "Invalid size or input!" << endl;
        return 1;  // Exit if invalid size or non-integer input is entered
    }
    
    int number;
    int smallest = INT_MAX;  // Initialize smallest with the largest possible integer

    // Input the numbers and find the smallest
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        
        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid integer." << endl;
            return 1;  // Exit if non-integer input is entered
        }
        
        if (number < smallest) {
            smallest = number;  // Update smallest if the current number is smaller
        }
    }

    // Output the smallest number
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
