#include <stdio.h>

int function(int arr[], int leftside, int rightside, int element) {
    if (leftside <= rightside) {
        int mid = leftside + (rightside - leftside) / 2;

        if (arr[mid] == element) {
            return mid; 
        } else if (arr[mid] < element) {
            return function(arr, mid + 1, rightside, element); 
        } else {
            return function(arr, leftside, mid - 1, element); 
        }
    }

    return -1; 
}

int main() {
	printf("Name:Ashish Gupta\n");
	printf("Enrollment Number:A2305221299\n");
    int size, element;
    printf("\nPlease enter the size of the array(It should be sorted): ");
    scanf("%d", &size);

    int arr[size];
    printf("Please enter the elements:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    int position = function(arr, 0, size - 1, element);

    if (position != -1) {
        printf("Element found at position %d.\n", position);
    } else {
        printf("Element not present.\n");
    }

    return 0;
}

