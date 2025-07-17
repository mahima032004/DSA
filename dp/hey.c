#include <stdio.h>

int sumAvg(int arr[], int n);

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Size of array is: %d\n", n);

    int fun[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &fun[i]);
    }

    int sum = sumAvg(fun, n);
    float average = (float)sum / n;

    printf("Sum is: %d\n", sum);
    printf("Average is: %.2f\n", average);

    return 0;
}

int sumAvg(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}
