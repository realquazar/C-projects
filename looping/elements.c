// Displays all the elements in an array

#include <stdio.h>
int main() {
    int length;
    int arr[] = {1, 2, 3, 4};
    length = sizeof(arr) / sizeof(arr[0]);
    printf("Elements in array:\n");
    for(int i=0; i<length; ++i) {
        printf("%d", arr[i]);        
    }
    printf("Length of array = %d", length);
}
