#include <iostream>

using namespace std;

int main() {

    // Array of numbers to sort
    int numbers[] = { 36, 21, 19, 73, 55, 93, 89, 1, 6, 7, 12, 20, 45 };

    // Number of items in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // A boolean to keep track of the swapped numbers
    bool swapped;

    // Nested for-loop that iterates over the numbers and swaps them if they are disordered
    for (int i = 0; i < size; i++) {
        swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = true;
            }
        }
        // Break out of the loop if after an iteration, no values were swapped
        if (!swapped)
            break;
    }

    // Display the sorted numbers
    for (int i = 0; i < size; i++) {
        cout << numbers[i];
        if (i != size - 1)
            cout << ", ";
    }
}
