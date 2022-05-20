/* Exercise 4 - Is Prime?
 * Author: Daniel Geula
 * Date: 20/05/2022
 * Version: 1.0
 */

#include <stdio.h>

int main() {

  int userNum1, userNum2;

  // prompt user for two integers between 1-100, save as userNum1, userNum2
  printf("\nEnter two integer values between 0-100: ");
  scanf("%d %d", userNum1, userNum2);

  // test that userNum1, userNum2 are in the range 0-100, else output error
  if (userNum1 < 0 || userNum1 > 100 || userNum2 < 0 || userNum2 > 100)
  {
      printf("\nInvalid input. Values must be between 1-100.\n")
      break;
  }
  
    printf("test");

  return 0;
  
}