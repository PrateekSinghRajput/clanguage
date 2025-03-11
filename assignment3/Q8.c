#include <stdio.h>

int findSum(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + findSum(arr, n - 1);
}

int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int min = findMin(arr, n - 1);
    return (arr[n - 1] < min) ? arr[n - 1] : min;
}

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int max = findMax(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

float findAverage(int arr[], int n) {
    if (n == 0)
        return 0;
    return (float)findSum(arr, n) / n;
}

int main() {
    int arr[] = {10, 20, 5, 30, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Sum: %d\n", findSum(arr, n));
    printf("Average: %.2f\n", findAverage(arr, n));
    printf("Minimum: %d\n", findMin(arr, n));
    printf("Maximum: %d\n", findMax(arr, n));
    
    return 0;
}
