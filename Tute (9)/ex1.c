#include <stdio.h>
#include <string.h> 

void reverseArray(char arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int isEqual(char arr1[], char arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char arr[100]; 
    printf("Enter a Word : ");
    scanf("%s", arr);

    int length = strlen(arr); 

    char rev[100]; 
    strcpy(rev, arr); 
    reverseArray(rev, length);

    if (isEqual(arr, rev, length)) {
        printf("%s is a palindrome\n", arr);
    } else {
        printf("%s is not a palindrome\n", arr);
    }

    return 0;
}
