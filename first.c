#include <stdio.h>

int main() {
    // Code issue 1: Variable used without initialization
    int num;
    printf("The number is: %d\n", num);

    // Code issue 2: Using printf without format specifier
    int x = 10;
    printf(x);

    // Code issue 3: Accessing array index out of bounds
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Value at index 10: %d\n", arr[10]);

    // Code issue 4: Infinite loop
    int i = 0;
    while (i >= 0) {
        // Do something
    }

    // Code issue 5: Unused variable
    int y = 20;

    return 0;
}
