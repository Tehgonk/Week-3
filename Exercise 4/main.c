/* Exercise 4 - Is Prime?
 * Author: Daniel Geula
 * Date: 20/05/2022
 * Version: 1.0
 */

#include <stdio.h>

int main() {

    int userNum1, userNum2, diff, isPrime = 1;

    // prompt user for two integers between 1-100, save as `userNum1`, `userNum2`
    printf("\nEnter two integer values between 0-100: ");
    scanf("%d %d", &userNum1, &userNum2);

    // test that `userNum1`, `userNum2` are in the range 0-100, else output error
    if (userNum1 < 0 || userNum1 > 100 || userNum2 < 0 || userNum2 > 100)
    {
        printf("\nInvalid input. Values must be between 1-100.\n");
        return 0;
    }

    // find difference between `userNum1`, `useNum2`, save as `diff`
    if (userNum1 > userNum2)
    {
        diff = userNum1 - userNum2;
    } else
    {
        diff = userNum2 - userNum1;
    }

    // determine whether `diff` is a prime number or not

    // eliminate 0, 1
    if (diff == 0 || diff == 1)
    {
        printf("%d is not a prime number.", diff);
        return 0;   
    }

    for (int i = 2; i <= diff / 2; i++)
    {
        if (diff % i == 0)
        {
            isPrime = 0;
            break;
        }
        
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.", diff);
    } else
    {
        printf("%d is not a prime number.", diff);
    }

  return 0;
  
}