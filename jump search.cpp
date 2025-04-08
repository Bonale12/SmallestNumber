#include <iostream>
#include <vector>
#include <cmath>

int jumpSearch(const std::vector<int>& arr, int target) {
    int n = arr.size();
    int jump = sqrt(n);
    int prev = 0;

    while (arr[std::min(jump, n) - 1] < target) {
        prev = jump;
        jump += sqrt(n);
        if (prev >= n) return -1; // Out of bounds
    }

    for (int i = prev; i < std::min(jump, n); i++) {
        if (arr[i] == target) return i;
    }
    return -1; // Not found
}

int main() {
    std::vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int result = jumpSearch(arr, target);
    if (result != -1) std::cout << "Element found at index: " << result << std::endl;
    else std::cout << "Element not found." << std::endl;
    return 0;
}
