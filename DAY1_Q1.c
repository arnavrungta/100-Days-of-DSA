// Problem: Insert an element x at a given 1-based position pos in an array

#include <stdio.h>

int main() {
    int n, pos, x;

    // Read size of array
    scanf("%d", &n);

    int arr[100];   // assuming max size is 100

    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position (1-based)
    scanf("%d", &pos);

    // Read element to insert
    scanf("%d", &x);

    // Shift elements to the right (from end to pos-1)
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at position (pos-1 index)
    arr[pos - 1] = x;

    // Print updated array (size becomes n+1)
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
