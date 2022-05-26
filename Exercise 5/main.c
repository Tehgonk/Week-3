/* Exercise 5 - Two-dimensional arrays
 * Author: Daniel Geula
 * Date: 25/05/22
 * Version: 1.0
 */

#include <stdio.h>

int main() {

  // size of M and N
  int m, n, sum = 0;

  printf("Enter the size of the array (m, n): ");
  scanf("%d %d", &m, &n);

  // create and populate 2d array of size m, n
  int arr[m][n];

  for (int i = 0; i < m; i++)
  {
      for (int j = 0; j < n; j++)
      {
          printf("\nEnter a value for row %d, column %d: ", i, j);
          scanf("%d", &arr[i][j]);
          sum += arr[i][j];
      }
      
  }

  // print average
  printf("\nArray average: %g\n", sum / (float)(m * n));
  

  return 0;
  
}