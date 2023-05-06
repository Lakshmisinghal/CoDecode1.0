#include <stdio.h>

int main() {
    int n, i, sume = 0, sumo = 0;
  
    scanf("%d", &n);
    int arr[n];
   
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sume += arr[i];
        }
    else {
            sumo += arr[i];
        }
    }
    printf("%d", sume + sumo);
    return 0;
}
