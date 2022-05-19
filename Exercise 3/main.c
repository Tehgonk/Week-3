/* Exercise 3 - 
 * Author: Daniel Geula
 * Date: 17/05/2022
 * Version: 1.0
 */

#include <stdio.h>

int main() {

    // initialize `count` to 0
    float userNum, numArr[20];
    char numStrings[20][20] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth", "Eleventh", "Twelfth", "Thirteenth", "Fourteenth", "Fifteenth", "Sixteenth", "Seventeenth", "Eighteenth", "Nineteenth", "Twentieth"};

    // prompt user for twenty numbers, store in `numArr`
    printf("\nEnter 20 numbers\n");
    for (int i = 0; i < 20; ++i) 
    {
        printf("%s number: ", numStrings[i]);
        scanf("%f", &numArr[i]);
    }

    /* // test print the values in `numArr`
    printf("\nThe numbers in the array are:\n");
    for (int i = 0; i < 20; ++i)
    {
        printf("%g\n", numArr[i]);
    } */



    /* // prompt user for number to search for in `numArr`
    printf("\n\nEnter a number to search: ");
    scanf("%d", &userNum);

    for (int i = 0; i < 20; ++i)
    {
        if (numArr[i] == userNum)
        {
            count++; // increment `count` if number is found
        }
    }

    // output the number of times `userNum` was found in `numArr`
    printf("\nThe number %d appears %d times in the array\n", userNum, count); */

  return 0;
  
}