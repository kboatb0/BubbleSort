#include <iostream>

using namespace std;

int main(){

    int numbers[] = {36, 21, 19, 73, 55, 93, 89, 1, 6, 7, 12, 20, 45};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    bool swapped;

    for (int i = 0; i < size; i++){
        swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) 
            break;
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i];
        if (i != size - 1) 
            cout << ", ";
    }
}
