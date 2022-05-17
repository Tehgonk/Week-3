/* Exercise 2 - Finding the Instances of a Number in an Array
 * Author: Daniel Geula
 * Date: 17/05/2022
 * Version: 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int userNum, count = 0, numArr[20];
    char numStrings[20][20] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth"};

    for(int i = 0; i < 20; ++i) {
        printf("\nEnter %s number: ", numStrings[i]);
        scanf("%d", &numArr[i]);
        system("cls");
    }

    printf("Now enter a random number: ");
    scanf("%d", userNum);

    for(int i = 0; i < 20; ++i) {
        if(userNum == numArr[i]) {
            count++;
        }
    }

    printf("The number %d appears %d times in the array", userNum, count);

  return 0;
  
}