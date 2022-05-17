/* Exercise 2 - Finding the Instances of a Number in an Array
 * Author: Daniel Geula
 * Date: 17/05/2022
 * Version: 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int userNum, count, numArr[20];
    char numStrings[20][20] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth"};

    for(int i = 0; i < 20; ++i) {
        printf("\nEnter %s number: ", numStrings[i]);
        scanf("%d", &numArr[i]);
        system("cls");
    }

  return 0;
  
}