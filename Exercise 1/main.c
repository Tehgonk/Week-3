/* Exercise 1 - Smallest Number in Array
 * Author: Daniel Geula
 * Date: 16/05/2022
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int arr[20], n, min;

    printf("\nEnter a number: ");
    scanf("%d", &n);
    
    // Seed random number generator
    srand(time(NULL));
    
    // Fill array with random number between 0 and N
    for(int i = 0; i < 20; ++i) {
        arr[i] = rand() % (n + 1);
    }

    min = arr[0];
    for(int i = 0; i < 20; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // For testing purposes
    for(int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("Smallest: %d", min);
    

  return 0;
  
}