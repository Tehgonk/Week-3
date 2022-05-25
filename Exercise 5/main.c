/* Exercise 5 - Two-dimensional arrays
 * Author: Daniel Geula
 * Date: 25/05/22
 * Version: 1.0
 */

#include <stdio.h>

int main() {

  // size of M and N
  int m, n;

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
      }
      
  }

  // test print arr values
  for (int i = 0; i < m; i++)
  {
      for (int j = 0; j < n; j++)
      {
          printf("%d ", arr[i][j]);
          
      }
      
  }
  

  return 0;
  
}