#include <stdio.h>

int main() {
    int n, i, sume = 0, sumo = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sume += arr[i];
        } else {
            sumo += arr[i];
        }
    }
    printf("The sum of the even and odd digits is %d\n", sume + sumo);
    return 0;
}
