# Largest Number in Array
## Student Information
- **Name**: Bona Leta
- **Student ID**: RMNS-6499/23
- **Course**: DSA
## Algorithm
Algorithm:
1. Start
2. Input the size of the array (the number of elements to be entered) from the user and store it in the variable size.
3. Check if the size is valid (i.e., it should be greater than 0).
     If not, display an error message and terminate the program.
4. Initialize a variable smallest with a very large value, such   as INT_MAX (from <limits.h>), to ensure the first number entered will be smaller.
5. Loop through the numbers to be entered (from i = 1 to i = size):
Input a number from the user and store it in the variable number.
Compare the entered number with the current value of smallest.
If the entered number is smaller than smallest, update smallest to this new number.
6. After the loop ends, the variable smallest will hold the smallest number from the entered values.
7. Output the smallest number.
8. End.
## How to Run the Code
1. Clone the repository to your local machine.
2. Open the terminal and navigate to the repository directory.
3. Compile the C++ code using:
 ```bash
 g++ smallest.cpp -o main
Run the compiled program:
./main
Output
The program will output:
The smallest number in the array is: 50
Contributing
Feel free to contribute to this project by forking the
repository and submitting a pull request.
License
This project is licensed under the MIT License.