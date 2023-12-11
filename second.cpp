#include <iostream>
using namespace std;

int main() {
    // Code issue 1: Uninitialized variable
    int x;
    cout << "The value of x is: " << x << endl;

    // Code issue 2: Memory leak
    int *ptr = new int(5);

    // Code issue 3: Division by zero
    int a = 10, b = 0;
    int result = a / b;

    // Code issue 4: Unused variable
    int y = 20;

    // Code issue 5: Infinite loop
    int i = 0;
    while (i >= 0) {
        // Do something
    }

    return 0;
}
