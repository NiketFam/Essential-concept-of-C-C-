#include <iostream>
using namespace std;

int main() {
    int *p = new int[5];
    int *q = new int[10];

    // Fill original array
    p[0] = 3; p[1] = 45; p[2] = 3; p[3] = 67; p[4] = 56;

    // Copy elements from p to q
    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    // Free old memory
    delete[] p;

    // p now points to the new larger array
    p = q;

    // Print resized (copied) values
    cout << "Resized array:\n";
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }

    // Clean up
    delete[] p;

    return 0;
}

