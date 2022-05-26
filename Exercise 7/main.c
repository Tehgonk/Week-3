/* Exercise 7 - 2D Array Swap
 * Author: Daniel Geula
 * Date: 26/05/22
 * Version: 1.0
 */

#include <stdio.h>

int main() {

    // size of M and N
    int m, n, t;

    printf("Enter the size of the array (m, n): ");
    scanf("%d %d", &m, &n);

    // create and populate two 2d arrays of size m, n
    int arr1[m][n], arr2[m][n];

    printf("\n\nEnter values for array 1\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d of %d: ", (i * n) + (j + 1), (m * n));
            scanf("%d", &arr1[i][j]);
        }
        
    }

    printf("\n\nEnter values for array 2\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d of %d: ", (i * n) + (j + 1), (m * n));
            scanf("%d", &arr2[i][j]);
        }
        
    }

    
    return 0;
    
    }