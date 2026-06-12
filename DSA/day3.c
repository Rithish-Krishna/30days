/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes array must be malloced,
 * assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    
    *returnSize = numRows;
 
    *returnColumnSizes = malloc(numRows * sizeof(int));
    
    int **arr = malloc(numRows * sizeof(int *));

    for (int i = 0; i < numRows; i++) {
        (*returnColumnSizes)[i] = i + 1;
        arr[i] = malloc((i + 1) * sizeof(int));
    }


    if (numRows == 0) {
        return arr;
    }

 
    arr[0][0] = 1;

    if (numRows == 1) {
        return arr;
    }


    arr[1][0] = 1;
    arr[1][1] = 1;

    if (numRows == 2) {
        return arr;
    }


    int *prev = arr[1];

  
    for (int row = 2; row < numRows; row++) {

        arr[row][0] = 1;

        for (int j = 1; j < row; j++) {
            arr[row][j] = prev[j - 1] + prev[j];
        }

        arr[row][row] = 1;

        prev = arr[row];
    }

    return arr;
}