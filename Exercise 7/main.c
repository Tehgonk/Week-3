/* Exercise 7 - 2D Array Swap
 * Author: Daniel Geula
 * Date: 26/05/22
 * Version: 1.0
 */

#include <stdio.h>

int main() {

    // size of M and N
    int m, n, t;

    printf("Enter the size of the array (rows, columns): ");
    scanf("%d %d", &m, &n);

    // create two 2d arrays of size m, n
    int arr1[m][n], arr2[m][n];

    // populate first array
    printf("\nEnter values for array 1\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d of %d: ", (i * n) + (j + 1), (m * n));
            scanf("%d", &arr1[i][j]);
        }
        
    }

    // populate second array
    printf("\nEnter values for array 2\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d of %d: ", (i * n) + (j + 1), (m * n));
            scanf("%d", &arr2[i][j]);
        }
        
    }

    // create swap array
    int swapArr[m][n];

    // swap first and second arrays
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            swapArr[i][j] = arr2[i][j];
            arr2[i][j] = arr1[i][j];
            arr1[i][j] = swapArr[i][j]; 
        }
        
    }

    // print first array (swapped)
    printf("\nSwapped values of array 1:\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", arr1[i][j]);
        }
        
    }

    // print second array (swapped)
    printf("\n\nSwapped values of array 2:\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", arr2[i][j]);
        }
        
    }

    
    return 0;
    
    }