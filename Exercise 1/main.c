/* Exercise 1 - Smallest Number in Array
 * Author: Daniel Geula
 * Date: 16/05/2022
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int arr[20], userNum, min;

    // Prompt user for value of n, save as n
    printf("\nEnter a number: ");
    scanf("%d", &userNum);
    
    // Seed random number generator
    srand(time(NULL));
    
    // Fill each element of array with random number between 0 and n
    for(int i = 0; i < 20; ++i) {
        arr[i] = rand() % (userNum + 1);
    }

    // Assign first value in array to min
    min = arr[0];

    // Loop through array and find smallest number, save as min
    for(int i = 0; i < 20; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Output value of min
    printf("\nSmallest: %d\n", min);
    

  return 0;
  
}