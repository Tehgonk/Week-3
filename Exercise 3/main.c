/* Exercise 3 - Search for a Range of Numbers in an Array
 * Author: Daniel Geula
 * Date: 19/05/2022
 * Version: 1.0
 */

#include <stdio.h>

int main() {

    
    float L1, L2, max, sum = 0, numArr[20];
    char numStrings[20][20] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth", "Eleventh", "Twelfth", "Thirteenth", "Fourteenth", "Fifteenth", "Sixteenth", "Seventeenth", "Eighteenth", "Nineteenth", "Twentieth"};

    // prompt user for twenty numbers, store in `numArr`
    printf("\nEnter 20 numbers\n\n");
    for (int i = 0; i < 20; ++i) 
    {
        printf("%s number: ", numStrings[i]);
        scanf("%f", &numArr[i]);
    }

    // Find largest number in array, save as `max`
    max = numArr[0];
    for (int i = 0; i < 20; i++) 
    {
        if (numArr[i] > max) 
        {
            max = numArr[i];
        }
    }

    
    // prompt user for two values (`L1` and `L2`)
    printf("\nEnter two positive values (L1, L2)\n");
    printf("L1 must be > 0 and < %g: ", max);
    scanf("%f", &L1);
    printf("\nL2 must be > %g and < %g: ", L1, max);
    scanf("%f", &L2);

    // check for invalid inputs
    if (L1 < 0 || L1 > max || L2 < L1 || L2 > max)
    {
        printf("\nInvalid value entered.\n");
        return 0;
    }

    
    // loop through array and sum values between `L1` and `L2`
    for (int i = 0; i < 20; i++) {
		if (numArr[i] >= L1 && numArr[i] <= L2) {
			sum += numArr[i];
		}
	}
	
	printf("\nSum of values in range L1 to L2 is: %g\n", sum);

  return 0;
  
}