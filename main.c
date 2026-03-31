#include <stdio.h>

// 1. Declare integer array as a global variable
int data[] = {10, 20, 30, 40, 50};

int main() {
    int index;
    int data_size = sizeof(data) / sizeof(data[0]);

    // 2. Get index input from CLI
    printf("Enter the array index to access (0 to %d): ", data_size - 1);
    
    // Check if the input is a valid integer
    if (scanf("%d", &index) != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // 3. Check index boundaries and print the value
    if (index >= 0 && index < data_size) {
        printf("data[%d] = %d\n", index, data[index]);
    } else {
        printf("Error: Index out of bounds (valid range: 0-%d).\n", data_size - 1);
    }

    return 0;
}
